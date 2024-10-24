#!/usr/bin/perl -w

use strict;
use Data::Dump("dump");

print("How many numbers to enter: ");
chop(my $num=<>);

print("Enter numbers: \n");

my $count=0;
my @arr;
for my $i (1..$num)
{
  chop(my $a=<>);
  if ($a =~ m/[0-9]/g){
	push(@arr, $a);  
	$count++;
  }

  else{
      exit;
      }
}

dump(@arr);

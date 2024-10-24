#!/usr/bin/perl -w

use strict;

my $count=0;
print("Enter a command: ");
while (<>){
  print("Out: $_");
  $count++;

  if ($count == 5){
    exit;
  }
}

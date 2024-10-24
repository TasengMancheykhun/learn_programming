#!/usr/bin/perl -w
use strict;   
print "Enter a command : ";
my$a = 5;
print "Value: $a\n";
{
 my $a = 6;
  print "Value of a is $a\n";
}
print "Value of a outside the block is $a\n";
 $a = <>;
system ("$a");
#chomp ($a);
print "$a\n"

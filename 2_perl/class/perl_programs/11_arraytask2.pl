#!/usr/bin/perl -w

use strict ;
print "Enter first word : ";
chomp (my $a = <>);
print "Enter second word : ";
chomp (my $b = <>);
print "Enter  third word: ";
chomp (my $c =<> );

my @array = [$a,$b,$c];
print "$array[0]\"$array[1]\"$array[2]";

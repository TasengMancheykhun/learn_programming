#!/usr/bin/perl -w

use strict;

print "Enter a value: ";
chomp(my $a=<>);                 #chomp removes \n from the end
print("Chomp out: $a\n");
chop($a);                        #chop removes whatever is at the end
print("Chop out: $a\n");

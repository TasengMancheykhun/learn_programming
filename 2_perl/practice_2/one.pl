#!/usr/bin/perl -w

use strict;

print("Enter 1st word: ");
chomp(my $a=<>);

print("Enter 2nd word: ");
chomp(my $b=<>);

print("Enter 3rd word: ");
chomp(my $c=<>);

my @array = ("$a", "\"$b\"", "$c");

print("@array\n")





#!/usr/bin/perl -w

use strict;

print("Enter 1st word\n");
chop(my $a = <>);

print("Enter 2nd word\n");
chop(my $b = <>);

print("Enter 3rd word\n");
chop(my $c = <>);

my @array = ($a, $b, $c);

print("$array[0] \"$array[1]\" $array[2]\n");


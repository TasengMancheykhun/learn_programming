#!/usr/bin/perl -w

use strict;

my @array = ("a", "b", "c", "d", "e");
my $str = "ab";

print(reverse(@array),"\n");

print(scalar reverse($str),"\n");

print("-----------\n");
my @nw = @array[1,3];


print("$nw[0]\n");
print("$nw[1]\n");
print("$nw[2]\n");

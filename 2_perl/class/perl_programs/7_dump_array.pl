#!/usr/bin/perl -w


use strict;
use Data::Dump ("dump");

my @cdac = (
	["one", "ONE", "One", "oNe"],
	["two", "TWO", "Two", "tWo"],
	["three", "THREE", "Three", "tHRee"],
);

print("Whole \$array[0] is \n");
dump($cdac[0]);

print("count of \$array[0] = $#{$cdac[0]}\n");

print("count of \$array = $#cdac\n");

print("Total array count is $#cdac \n");

dump(@cdac);

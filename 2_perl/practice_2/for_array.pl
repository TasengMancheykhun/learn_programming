#!/usr/bin/perl -w

use strict;

my @arr = (1..10);

print("length $#arr\n");

for (my $i=0; $i<=$#arr; $i++){
     print("$arr[$i]\n");
}


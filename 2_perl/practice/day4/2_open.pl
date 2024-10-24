#!/bin/bash/perl -w

use strict;

print("Enter the word to count: \n"); 
my $a=<>;

print("Enter the file where you want to search: \n");
my $b=<>;

open(D,"<$b") or die "Taseng Error: $!";

my $count = 0;
my @file = <D>;
for(@file){
    if ($_ =~ m/$a/){
	$count++;
    }
}

print("Word count is $count \n");

close(D)

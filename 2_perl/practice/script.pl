#!/usr/bin/perl -w

use strict;

open(D,"<readfile") or die("Error: $!");

print("Enter the word to search in the file: ");
chomp(my $a=<>);
my $count=0;

for (<D>){
   if ($_ =~ m/$a/g){
     $count++;
   }  
}

print "$count\n";

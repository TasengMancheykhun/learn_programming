#!/usr/bin/perl -w
use strict ;

open (DATA,"<bigfile") or die "ErrorIO: $!";

print("Enter a word to search in the file: \n");
chomp(my $a = <>);

#my @text = <DATA>;
my $count = 0;
for (<DATA>){
        if ($_ =~ m/$a/g){
              $count += 1;
        }
}
print "Word count: $count \n";

close(DATA)















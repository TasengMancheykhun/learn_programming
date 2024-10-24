#!/usr/bin/perl -w

use strict;


open(A,"< secret") or die("Error :$!");
open(B,">> pecret") or die("Error :$!");


for (<A>){
  print B "$_";
}

print "Done\n";

close(A);
close(B);

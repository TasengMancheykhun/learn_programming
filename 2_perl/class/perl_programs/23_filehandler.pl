#!/usr/bin/perl -w
use strict ;
open (DATA,"<secret") or die "ErrorIO: $!";

while (<DATA>){
  print "$_"
}
close(DATA)















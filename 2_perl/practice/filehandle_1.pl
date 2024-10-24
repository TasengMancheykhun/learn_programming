#!/usr/bin/perl -w

use strict;


open(D,"<secret") or die("Error: $!");

while(<D>){
  print $_;
}

close(D);

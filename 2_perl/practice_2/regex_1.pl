#!/usr/bin/perl -w

use strict;

my $cdac = "this is cdac pune";

if ($cdac =~ s/s/_/g && $cdac =~ s/ /\+/g){
   print("$cdac\n");
}


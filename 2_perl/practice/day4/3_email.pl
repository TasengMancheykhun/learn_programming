#!/usr/bin/perl -w

use strict;

open(D,"<mailtext") or die "Error bro $!";

#my @text = <D>;

#print("@text");

for(<D>){
       if ($_ =~ m/[0-9a-zA-Z]{1,}\.[a-zA-Z]{1,}/g){
           print("$_");
       }
}

close(D);


#!/usr/bin/perl -w
use strict ;
open (DATA,"<secret") or die "ErrorIO: $!";
open (DATA2,">>data");

my  @text = <DATA>;
for (@text){
	print DATA2 "$_";
}

close(DATA)















#!/usr/bin/perl -w
use strict;
my $d = "this is sparta";
for ($d =~ s/(\w+)/uc $1/eg){
	#if ($_){
    	print "Match: $_\n$d\n";
	#}
 }

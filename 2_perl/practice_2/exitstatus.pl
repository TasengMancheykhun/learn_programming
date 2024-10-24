#!/usr/bin/perl -w

use strict;

#print("Please enter your answer Yes or No: \n");
#chomp(my $a = <>);
#
#if ($a eq "yes"){
#  print("You are absolutely Right!\n");
#} elsif ($a eq "no"){
#  print("You are absolutely Wrong\n");
#} else {
#  print("Its okay, Nevermind.\n");
#}


#my $a = `head -1 /etc/passwd`;
#
#my @out = split /:/, $a;
#
#print "$out[0], $out[5], $out[6]\n"


if (-s $ARGV[0]){
   print("hello\n");
} else{
   print("not hello\n")
}



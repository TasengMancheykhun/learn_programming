#!/usr/bin/perl -w

use strict;

#my $a = `curl -ks "www.cdac.in"`;

#if ($a =~ m/cdac/g){
#    print("Found: \n");
#}

#if ($a =~ m/\s/){
#    print("Match Found \n")
#}


#my $b = "This is the place where we play, eat and stay happy. It is called home.";
#
#if ($b =~ s/\s/_/g){
#    print("$b \n");
#}


#for my $i($a =~ m/cdac/gi) {
#    print("$i \n")
#}


#for ($a =~ m/india/gi) {
#    print("$_ \n")
#}
#


my $p = `ip a`;

for ($p =~ m/[0-9]{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}\/\d{1,2}/g){
    print("$_ \n");
}






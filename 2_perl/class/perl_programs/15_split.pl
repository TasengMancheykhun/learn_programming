#!/usr/din/perl -w 

use strict;

#my $a = `head -1 /etc/passwd`;
#
#my ($aa, $bb, $cc, $dd, $ee, $ff, $gg) = split /:/, $a;
#
#print "$aa\n$ff\n$gg";
#
#print "---------\n";
#
#my @arr = split /:/, $a;
#print "$arr[0] $arr[5] $arr[6]";
#
#print "---------\n";
#
#$a = `date`;
#@arr = split / /, $a;
#print "$arr[1] $arr[2], $arr[4], $arr[3]\n";


#my $i = $ARGV[0];


#for (my $a=$i; $a>=1; $a--){
#	print "$a \n";
#	sleep(1);
#}


for (my $i=$#ARGV; $i>=0; $i--){
	print "$ARGV[$i] \n";
	sleep(1);
}

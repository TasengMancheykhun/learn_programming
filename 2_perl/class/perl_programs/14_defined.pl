#!/usr/bin/perl

my ($a,$b) = @ARGV;
if (defined $a  && defined $b){
	print "defined\n" 
} elsif(defined $a){
	print "not defined\n"
} else {
	print "Bro defined\n"
}

#!/usr/bin/perl -w



use strict;

my $a = $ARGV[0];

if ($a > 0 || $a < 10){
        print "The first statement is: $a \n";
} elsif($a == 11) {
	print "The second statement is: $a \n";
} else {
	print "Nothing \n";
}


#!/usr/bin/perl 

use strict;

my %hash1 = ( 'key1'=> 'kids', 'lol' => 'psh' );

#print keys(%hash1,"\n");
#print values(%hash1,"\n");

print (%hash1,"\n");
print "key: $hash1{'key1'}\n";
print "$hash1{'lol'}\n";

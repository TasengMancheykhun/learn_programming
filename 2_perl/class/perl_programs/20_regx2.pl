#!/usr/bin/perl -w

use strict;

my $data = `curl -ks "https://www.bincodes.com/random-creditcard-generator/"`;

for ($data =~ m/[0-9]{12,16}/g){
    print("Match Found: $_ \n");

}

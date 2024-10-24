#!/usr/bin/perl -w

use strict;

my $data = `curl -ks "https://testbook.com/"`;

#for ($data =~ m/([0-9a-zA-Z_-]{1,}\@[a-zA-Z0-9]{1,}\.[a-zA-Z]{2,})/g){
#for ($data =~ m/([0-9a-zA-Z_-]+\@[a-zA-Z0-9]+\.[a-zA-Z]{2,})/g){
for ($data =~ m/\w+\@[a-zA-Z0-9]+\.\w{2,}/g){
    print("Match Found: $_ \n");
}

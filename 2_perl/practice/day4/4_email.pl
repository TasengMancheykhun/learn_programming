#!/usr/bin/perl -w

use strict;

$a = `curl -ks "https://testbook.com/"`;

for($a){
       if ($_ =~ m/\@[0-9a-zA-Z]{1,}\.[a-zA-Z]{1,}/g){
           print("$_");
       }
}

close(D);


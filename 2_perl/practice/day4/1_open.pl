#!/usr/bin/perl -w

use strict;

open(D,"<secret") or die "Taseng Error: $!";

while(<D>){
    print("$_");
}

close(D)


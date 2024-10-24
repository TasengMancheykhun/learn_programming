#!/usr/bin/perl -w

use strict;

open(D1,"< secret") or die("Error: $!");
open(D2,"> pecret") or die("Error: $!");


for(<D1>){	
   print(D2 "$_"); 

}

close(D1);
close(D2);

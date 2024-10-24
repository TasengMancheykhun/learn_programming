#!/usr/bin/perl -w

use strict;


my $a = `curl -ks https://www.bincodes.com/random-creditcard-generator/`;

for ($a =~ m/\d{12,16}/g){
	  print("$_\n");
  }




#3540147513879247 =16
#30013690191801 = 14
#342320516361382 = 15

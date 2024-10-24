#!/usr/bin/perl -w

use strict;
use Data::Dump("dump");         #To print multidimensional array, we need Dump

my @arr = ([12,34,56,78],
           [35,67,33,1],
           [30,8,76.23],
           [2,89,103,88]);

dump($arr[0]);  
dump(@arr);
dump($#arr);

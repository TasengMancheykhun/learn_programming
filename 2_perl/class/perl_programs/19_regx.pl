#!/usr/bin/perl
use strict;
use warnings;
my $data = "C-DAC with its focus in A99vanced Computing is uniquely positioned to establish dependabl77e and secure Exascale Ecosystem offering services in various domains. C-DAC has crafted its strategic practical roadmap keeping in perspective66 the paradigm shift in the global technological ecosystem and ever-dynamic area of national ICT scenario. 89Accordingly, the roadmap has been devised with four-pronged approach based on the Core as HPC & Cloud., viz. Futuristic Research, Applied R&D, Applications and Services covering 28 thrust areas. Towards realisation of the roadmap, mission mode programmes were evolved to research, develop and deliver the futuristic technologies/solutions. ";

print ("$data\n");
print("-------------\n");

if  ($data =~ s/[0-9]/_/g){
     print "Match found\n";
     print "$data\n";
} else{ 
     print " Not found\n";
}



print("----\n");
# INDEX 
print(index("hello","l"),"\n");

# SUBSTR
print(substr("hello",2,1),"\n");

# REPEAT string
print("hello\n"x2);

# REVERSE string
print(scalar reverse("hello"),"\n");

# REVERSE array
print(reverse(1,2,3,4,5),"\n");

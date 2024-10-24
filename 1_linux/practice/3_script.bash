#!/bin/bash

# using switch case; positional argument; functions

function timepass(){
	echo "kyu kar raha h timepass"
}


file=$4
domain=$2
function run(){
	while read sub;do
		if host $sub.$domain.com >& out; then
			echo "$sub.$domain.com"
                fi
	done < $file
}


case $1 in 
	"-d")
	if [[ $3 == -w ]];then
           run
	fi
        ;;	

        "-h")
	timepass
	exit 0
	;;	
	
        *)
	echo "Error: invalid argument"
	exit 127
        ;;
esac

#!/bin/bash

# using switch case; positional argument; functions

function timepass(){
	echo "kyu kar raha h timepass"
}


file=$2
function run(){
	while read sub;do
		if [[ $sub =~ [a-z] ]]; then
                   echo "$sub"
                fi
	done < $file
}


case $1 in 
	"-d")
	run
	;;

        "-h")
	timepass
	exit 0
	;;	
	
        *)
	echo "Error: $1 is invalid argument"
	exit 127
        ;;
esac

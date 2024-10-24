#!/bin/bash 

while read a; do	
	if [[ $a == 34 ]];then
		echo $a
	else 
		echo "not match"
        fi
done < num


#!/bin/bash

# using while read from file; using regex in if; using stdin < 


cat num1 

echo "************"

while read a; do
  if [[ $a =~ [a-z][@-_?0-9][A-Z] ]];then
	 echo "$a"
  else
	 echo "---" 
  fi

done < num1

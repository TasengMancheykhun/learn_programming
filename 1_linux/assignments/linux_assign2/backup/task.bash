#!/bin/bash
while true; do
read -p "

********************
1. Make a file
2. Display contents
3. Copy the file
4. Rename the file
5. Delete the file
6. Exit
********************

Enter your option: " option
if [[ $option == '1' ]];then
       read -p "Enter file name: " file
       if [ -e $file ];then
	       echo "Error! File already exist."
       else
	       read -p "Enter some data: " data
	       echo "$data" > $file
       fi

elif [[ $option == 2 ]];then
       read -p "Enter a file name: " file
       if [ -e $file ];then
               cat $file 
       else 
               echo "File does not exist."
       fi

elif [[ $option == 3 ]];then
       read -p "Enter the source file name: " a
       if [ -e $a ] && [ -r $a ];then
               read -p "Enter the target file name: " b

	       if [ -e $b ]; then
		       echo "The target file already exist."
	       else
		  echo "Copying file $a to $b"     
		  cp $a $b
	       fi
       else
	       echo "Error: The source file does not exist."
       fi

elif [[ $option == 4 ]];then
       read -p "Enter the source file name: " a
       if [ -e $a ] && [ -r $a ];then
               read -p "Enter the target file name: " b

	       if [ -e $b ]; then
		       echo "The target file already exist."
	       else
		  mv $a $b
	       fi
       else
	       echo "Error: The source file does not exist."
       fi

elif [[ $option == 5 ]];then
       read -p "Enter a filename: " file 
       if [ -e $file ] && [ -w $file ]; then 
	       read -p "Do you want to delete the file $file, y or n: " ans

	       if [[ $ans == 'y' ]] || [[ $ans == 'Y' ]];then
		       rm $file
		       echo "File $file deleted!"
	       fi
       else
               echo "File $file doesnot exist."       
       fi       

else
       echo "Exiting, GOOD-BYE!"
       exit

fi	
done

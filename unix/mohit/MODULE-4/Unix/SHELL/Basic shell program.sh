#FILE OPERATIONS


#!/bin/bash

echo -e "Enter File Name which is already exist : \c"
read filename

echo "Content of this file is: "
cat $filename

echo "------------------------------"

echo -e "Enter new name to file: \c"
read newfile

mv $filename $newfilename
echo "File RENAMED Successfully...!!"

cp /home/user6/friends.txt myfriends.txt

echo "After sort the content of file are"

sort myfriends.txt


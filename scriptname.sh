#!/bin/bash

echo "Enter filename: "
read filename

if [ -e $filename ]
then
echo "$filename exists in this directory"
cat $filename

else
	cat > $filename
	echo "File of name $filename created"

fi

#!/bin/sh
for x in $*
do
if [ -f $x ]
then
echo " $x is  a file "
echo " no of lines in the file are "
wc -l $x
elif [ -d $x ]
then 
echo "$x is a directory"
else
echo"enter the validation file or directory"
fi
done

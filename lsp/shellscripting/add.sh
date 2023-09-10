#!/bin/sh

#echo "add two numbers"
#echo "enter the first number"
#read a
#echo "enter the second number"
#read b
#c=$(expr $a + $b)
#echo "sum :$c"

if [ $# -eq 2 ]
then
c=$(expr $1 + $2 )
echo "sum:$c"
else
echo "error"
fi

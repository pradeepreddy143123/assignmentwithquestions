#!/bin/sh
if [ $# -eq 3 ]
then
if [ $1 -gt $2 ]
then
	if [ $1 -gt $3 ]
	then
	echo "big:$1"
	else
	echo "big:$3"
	fi
elif [ $2 -gt $3 ]
then
echo "big:$2"
else 
echo "big:$3"
fi
fi

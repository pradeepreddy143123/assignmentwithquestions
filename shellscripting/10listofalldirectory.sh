#!/bin/sh
if [ -d $1 ]
then
for i in $1/* 
do
if [ -d $i ]
then
echo "$i" ;fi
done
else
echo "no directory files"
fi

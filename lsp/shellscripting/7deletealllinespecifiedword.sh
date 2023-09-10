#!/bin/sh
echo "enter the file name"
read file
echo "enter the word"
read word
echo file before removing $word:
cat $file
grep -v -i $word $file > test
mv test $file
echo file after removing $word:
cat $file


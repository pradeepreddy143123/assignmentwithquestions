#!/bin/sh
for file in *
do
if [ -f $file ];then
if [ -f $file -a -w $file -a -x $file ];then
echo "$file"
fi
else
echo "not a file"
fi
done

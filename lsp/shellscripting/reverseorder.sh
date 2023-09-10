#!/bin/sh
echo "enter the number"
read num
sum=0
while [ $num != 0 ]
do
rem=$(($num % 10 ))
sum=`expr $(( $sum \* 10 )) + $rem `
num=$(( $num / 10 ))
done
echo $sum


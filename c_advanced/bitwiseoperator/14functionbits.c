//14. Write a functionsetbits(x,p,n,y)that return x with then bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged
/*e.g. if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3 and p = 6 then
you need to strip off 3 bits of y (111) and put them in x at position 10xxx010 to get answer
10111010. Your answer should print out the result in binary form although input can be in
decimal form.
Your output should be like this:
x = 10101010 (binary)
y = 10100111 (binary)
setbits n = 3, p = 6 gives x = 10111010 (binary).*/

#include<stdio.h>
int main()
{
int x,y,i,n,p;
scanf("%d%d",&x,&y);
printf("enter no bits and position");
scanf("%d%d",&n,&p);
for(i=0;i<n;i++)
{
if(y&(0x01<<i))
x=x|(0x01<<p);
else
x=x&(0x01<<p);
p--;
}
for(i=0;i<8;i++)
{
if(x&(0x80))
printf("1");
else
printf("0");
x=x<<1;
}
}


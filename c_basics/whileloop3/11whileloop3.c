#include<stdio.h>
int main()
{
int num,n,i,j,c;
scanf("%d%d",&num,&n);
for(i=num;i<=n;i++)
{
for(j=1,c=0;j<=i;j++)
{
if(i%j==0)
c++;
}
if(c==2)
{
printf("%d prime number\n",i);
}
}
return 0;
}

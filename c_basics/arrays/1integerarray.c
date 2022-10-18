#include<stdio.h>
int main()
{
int num[100],i;
printf("%lu\n",sizeof(num));
for(i=0;i<100;i++)
{
  num[i]=i+1;
printf("%d\n",num[i]);
}
for(i=0;i<100;i++)
{
  if(num[i]%2==0)
{
printf("evennumber=%d\n",num[i]);
}
else
{
printf("oddnumber=%d\n",num[i]);
}
}

for(i=0;i<100;i++)
{
num[i]=num[i]+5;
printf("%d\n",num[i]);
}
}


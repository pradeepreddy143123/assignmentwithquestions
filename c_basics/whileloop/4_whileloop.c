#include<stdio.h>
int main()
{
int i,n,a;
i=0;
printf("enter the number of repetations");
scanf("%d",&n);
while(i<n)
{
printf("enter the number");
scanf("%d",&a);
if(a>0)
printf("positive number");
else if(a<0)
printf("negative number");
else if(a==0)
printf("zero");
i++;
}
return 0;
}


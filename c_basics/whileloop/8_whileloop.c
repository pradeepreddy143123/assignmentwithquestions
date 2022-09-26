#include<stdio.h>
int main()
{
int i=1,n,k,a,b,c,d,e,f,total,percentage,t;
scanf("%d",&n);
printf("enter the student1 marks\n");
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
total=(a+b+c+d+e+f);
t=total;
k=i;
while(i<=n-1)
{
printf("enter the student %d marks of 6 subjects\n",i+1);
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
total=(a+b+c+d+e+f);
if(total>t)
{
t=total;
k=i+1;
i++;
}
else
{
i++;
}
}
printf("topper is student%d",k);

return 0;
}


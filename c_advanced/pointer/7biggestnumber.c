#include<stdio.h>
int main()
{
int a,b,c,*p1,*p2,*p3;
printf("enter the numbers\n");
scanf("%d%d%d",&a,&b,&c);
p1=&a;
p2=&b;
p3=&c;
if(*p1>*p2&&*p1>*p3)
{
printf("p1 is bigger=%d\n",*p1);
}
else if(*p2>*p3&&*p2>*p1)
{
printf("p2 is bigger=%d\n",*p2);
}
else if(*p3>*p1&&*p3>*p2)
{
printf("p3 is bigger=%d\n",*p3);
}
else
printf("all are equal\n");
}

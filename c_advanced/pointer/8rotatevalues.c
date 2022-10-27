#include<stdio.h>
int main()
{
int x,y,z,*p1,*p2,*p3,temp=0;
printf("enter numbers\n");
scanf("%d%d%d",&x,&y,&z);
p1=&x;
p2=&y;
p3=&z;
temp=*p1;
*p1=*p2;
*p2=*p3;
*p3=temp;
printf("%d\n%d\n%d\n",*p1,*p2,*p3);
}

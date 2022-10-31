#include<stdio.h>
int rotate(int *p1,int *p2,int *p3)
{
int temp=0;
temp=*p1;
*p1=*p2;
*p2=*p3;
*p3=temp;
}
void main()
{
int x,y,z,*p1,*p2,*p3;
printf("enter a number\n");
scanf("%d%d%d",&x,&y,&z);
p1=&x;
p2=&y;
p3=&z;
rotate(&x,&y,&z);
printf("%d%d%d",*p1,*p2,*p3);
}


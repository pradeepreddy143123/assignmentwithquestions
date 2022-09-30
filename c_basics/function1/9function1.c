#include<stdio.h>
int compare(int d1,int d2,int m1,int m2,int y1,int y2)
{
if(d1==d2&&m1==m2&&y1==y2)
{
return 1;
}
else
{
if(y1>y2)
{

return 2;
}
else if(y2>y1)
{
return 0;
}
else if(y1==y2)
{
if(m1>m2)
{
return 2;
}
else if(m2>m1)
{
return 0;
}
else if(m1==m2)
{
if(d1>d2)
{
return 2;
}
else if(d2>d1)
{
return 0;
}
else if(d1==d2)
{
return 1;
}
}
}
}
}
int main()
{
int d1,d2,m1,m2,y1,y2,b;
printf("enter 1st date");
scanf("%d%d%d",&d1,&m1,&y1);
printf("enter 2nd date");
scanf("%d%d%d",&d2,&m2,&y2);
b=compare(d1,d2,m1,m2,y1,y2);
if(b==0)
{
printf("%d-%d-%d is older",d1,m1,y1);
}
else if(b==2)
{
printf("%d-%d-%d is older",d2,m2,y2);
}
else if(b==1)
{
printf(" equal");
}
}


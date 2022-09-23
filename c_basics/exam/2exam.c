#include<stdio.h>
int main()
{
int d1,d2,m1,m2,y1,y2;
printf("enter the first candidate date of birth");
scanf("%d%d%d",&d1,&m1,&y1);
printf("enter the second candidate date of birth");
scanf("%d%d%d",&d2,&m2,&y2);
if(y1>y2)
{
printf("y2 is older");
}
else if(y2>y1)
{
printf("y1 is older");
}
else if(m1>m2)
{
printf("m2 is older");
}
else if(m2>m1)
{
printf("m1 is older");
}
else if(d1>d2)
{
printf("d2 is older");
}
else if(d2>d1)
{
printf("d1 is older");
}
else if(y1==y2&&m1==m2&&d1==d2)
printf("both of them are of same age");
else
printf("enter the valid date of birth");
return 0;
}

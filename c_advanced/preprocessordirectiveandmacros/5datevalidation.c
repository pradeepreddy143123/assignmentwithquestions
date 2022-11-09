#include<stdio.h>
#define LEAPYEARVALIDATION(d,m,y) (m==2)&&(y%4==0&&!y%100==0||y%400==0)&&(d>=1 && d<=29)
#define MONTH1(m,d) (m==1||m==3||m== 5||m==7||m== 8||m==9||m==12) && (d>=0&&d<=31)
#define MONTH2(m,d) (m==4||m==6||m== 9||m==11) && (d>=0&&d<=30)

int main()
{
int y,m,d,a;
printf("enter the date");
scanf("%d%d%d",&d,&m,&y);
if(LEAPYEARVALIDATION(d,m,y))
{
 printf("date valid");
}

else if(MONTH1(m,d))
{
printf("date valid");
}
else if(MONTH2(m,d))
{
printf("valid");
}
else
{
printf("not valid");
}
}


#include<stdio.h>
int main()
{
int i,n;
printf("enter how many students date of birth to read\n");
scanf("%d",&n);
i=0;
while(i<n)
{
int d,m,y;
printf("enter the student%d date of birth\n",i+1);
scanf("%d %d %d",&d,&m,&y);
printf("date is: %d-",d);
if(m>=1)
{
if(m==1)
{
printf("January");
}
else if(m==2)
{
printf("February");
}
else if(m==3)
{
printf("March");
}
else if(m==4)
{
printf("April");
}
else if(m==5)
{
printf("May");
}
else if(m==6)
{
printf("June");
}
else if(m==7)
{
printf("July");
}
else if(m==8)
{
printf("August");
}
else if(m==9)
{
printf("September");
}
else if(m==10)
{
printf("October");
}
else if(m==11)
{
printf("November");
}
else if(m==12)
{
printf("December");
}
}
printf("-%d\n",y);
if(y%4==0 && y%100!=0 || y%400==0)
{
printf("this student is born in a leap year\n");
}
i++;
}
return 0;
}

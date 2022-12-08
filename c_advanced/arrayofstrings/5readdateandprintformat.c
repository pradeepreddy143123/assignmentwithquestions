/*5) WAP to read a date and print in the below format:
input : 1-3-2001
output: 1st March, 2001*/
#include<stdio.h>
int main()
{
char *d[4]={"st","nd","rd","th"};
char *m[12]={"January","February","March","April","May","June","July","August","September","October","November","december"};
int d1,m1,y1;
printf("enter the date,month & year\n");
scanf("%d %d %d",&d1,&m1,&y1);
if(d1==1||d1==21||d1==31)
printf("%d%s ",d1,d[0]);
else if(d1==2||d1==22)
printf("%d%s ",d1,d[1]);
else if(d1==3||d1==23)
printf("%d%s ",d1,d[2]);
else
printf("%d%s ",d1,d[3]);
switch(m1)
{

case 1:printf("%s",m[0]);break;
case 2:printf("%s",m[1]);break;
case 3:printf("%s",m[2]);break;
case 4:printf("%s",m[3]);break;
case 5:printf("%s",m[4]);break;
case 6:printf("%s",m[5]);break;
case 7:printf("%s",m[6]);break;
case 8:printf("%s",m[7]);break;
case 9:printf("%s",m[8]);break;
case 10:printf("%s",m[9]);break;
case 11:printf("%s",m[10]);break;
case 12:printf("%s",m[11]);break;

}
printf(",%d\n",y1);
return 0;

}

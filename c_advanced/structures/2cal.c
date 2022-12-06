#include "2header.h"
void cal(struct student s1)
{
int i,sum=0;
printf("enter the studentid and studentname\n");
scanf("%d %s",&s1.id,s1.name);
printf("enter the marks\n");
for(i=0;i<6;i++)
{
scanf("%d",&s1.subjects[i]);
}

printf("enter the father name and date of joining and dateofbirth\n");
scanf("%s %d %d %d %d %d %d",s1.fathername,&s1.d,&s1.m,&s1.y,&s1.dd,&s1.mm,&s1.yy);
for(i=0;i<6;i++)
{
sum=sum+s1.subjects[i];
}
s1.per=sum/6;
for(i=0;i<6;i++)
{
printf("%d",s1.subjects[i]);
}
printf("%d\n%s\n%s\n%d-%d-%d\n%d-%d-%d\n%f\n",s1.id,s1.name,s1.fathername,s1.d,s1.m,s1.y,s1.dd,s1.mm,s1.yy,s1.per);
}

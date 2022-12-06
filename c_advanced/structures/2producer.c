#include "2header.h"
int main()
{
int i;
struct student s1={1,"deep",{90,90,95,95,95,100},"pradeep",2,5,2015,7,8,2000,90};
//printf("enter ID, name, marks of 6 subjects as an array, fathername, day ,month & year of birth, day,month&year of joining, percentage\n");
printf("%d\n%s\n",s1.id,s1.name);

for(i=0;i<6;i++)
{
printf("%d\n",s1.subjects[i]);
}
printf("%s\n%d-%d-%d\n%d-%d-%d\n%f\n",s1.fathername,s1.d,s1.m,s1.y,s1.dd,s1.mm,s1.yy,s1.per);
cal(s1);
}



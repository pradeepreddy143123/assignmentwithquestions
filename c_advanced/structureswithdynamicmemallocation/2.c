
#include<stdio.h>
#include<stdlib.h>
struct date
{
int d;
int m;
int y;
};
struct student
{
int ID;
char name[50];
int marks[6];
struct date dob, doj;
float  * per;
char * coursename;
struct date * dop;
};
struct date dtofpla;
int main()
{
struct student *p;
p=(struct student *)malloc(sizeof(struct student));
int i,j,sum=0;
float per=0;
char str[50];
p->coursename=str;
p->dop=&dtofpla;
printf("enter the id name\n");
scanf("%d %s",&p->ID,p->name);

printf("enter the marks\n");
for(j=0;j<6;j++)
{
scanf("%d",&p->marks[j]);
sum+=p->marks[j];
}
per=sum/6;
printf("enter the DOB and DOJ\n");
scanf("%d-%d-%d %d-%d-%d",&p->dob.d,&p->dob.m,&p->dob.y,&p->doj.d,&p->doj.m,&p->doj.y);
printf("enter the course name\n");
scanf(" %[^\n]s",p->coursename);
printf("enter the placement date\n");
scanf(" %d-%d-%d",&p->dop->d,&p->dop->m,&p->dop->y);

printf("id is: %d name is:%s\n",p->ID,p->name);
printf("marks are\n");
for(j=0;j<6;j++)
{
printf("%d\n",p->marks[j]);
}
printf("enter the DOB and DOJ\n");
printf("date of birth:%d-%d-%d\n date of joining:%d-%d-%d\n ",p->dob.d,p->dob.m,p->dob.y,p->doj.d,p->doj.m,p->doj.y);
printf("coursename is %s\n",p->coursename);
printf("percentage is %f\n",per);
printf("enter the placement date\n");
printf("%d-%d-%d\n",p->dop->d,p->dop->m,p->dop->y);
}

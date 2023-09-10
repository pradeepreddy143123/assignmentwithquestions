/*
1) Practice scanf and printf on each member of the structure using a structure variable and a structure pointer, using the below structure template:


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

create a structure variable of the above type and read ID , name and marks of 6 subjects, date of birth and date of joining using scanf and printf.
Then calculate percentage of marks, and store the percentage using per pointer member, and print it.

then assign some course name to coursename pointer and print it.

then do scanf and printf on date of placement (read date and print date).


do all these steps in one program.
*/

#include<stdio.h>
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
/*int main()
{
struct student s;
int i,j,sum=0;
float per=0;
char str[50];
s.coursename=str;
s.dop=&dtofpla;
printf("enter the id name\n");
scanf("%d %s",&s.ID,s.name);

printf("enter the marks\n");
for(j=0;j<6;j++)
{
scanf("%d",&s.marks[j]);
sum+=s.marks[j];
}
per=sum/6;
printf("enter the DOB and DOJ\n");
scanf("%d-%d-%d %d-%d-%d",&s.dob.d,&s.dob.m,&s.dob.y,&s.doj.d,&s.doj.m,&s.doj.y);
printf("enter the course name\n");
scanf(" %s",s.coursename);
printf("enter the placement date\n");
scanf("%d-%d-%d",&s.dop->d,&s.dop->m,&s.dop->y);

printf("id is: %d name is:%s\n",s.ID,s.name);
printf("marks are\n");
for(j=0;j<6;j++)
{
printf("%d\n",s.marks[j]);
}
printf("enter the DOB and DOJ\n");
printf("date of birth:%d-%d-%d\n date of joining:%d-%d-%d\n ",s.dob.d,s.dob.m,s.dob.y,s.doj.d,s.doj.m,s.doj.y);
printf("coursename is %s\n",s.coursename);
printf("percentage is %f\n",per);
printf("enter the placement date\n");
printf("%d-%d-%d\n",s.dop->d,s.dop->m,s.dop->y);
}*/

int main()
{
struct student s,*p=&s;
int i,j,sum=0;
float per=0;
char str[50];
s.coursename=str;
s.dop=&dtofpla;
printf("enter the id name\n");
scanf("%d %s",&p->ID,p->name);

printf("enter the marks\n");
for(j=0;j<6;j++)
{
scanf("%d",&p->marks[j]);
sum+=s.marks[j];
}
per=sum/6;
printf("enter the DOB and DOJ\n");
scanf("%d-%d-%d %d-%d-%d",&p->dob.d,&p->dob.m,&p->dob.y,&p->doj.d,&p->doj.m,&p->doj.y);
printf("enter the course name\n");
scanf(" %s",p->coursename);
printf("enter the placement date\n");
scanf("%d-%d-%d",&p->dop->d,&p->dop->m,&p->dop->y);

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

  /*8) Create an array of students dynamically and read and print the data of the students and find the topper. (student template same as used previously)*/

#include<stdio.h>
#include<stdlib.h>
#define size 2

struct student{
int id;
int s[6];
char fathername[30],studentname[30];
int d,m,y;
int jd,jm,jy;
float per;
};

void Topper(struct student []);
int main()
{

struct student *s1=(struct student *)malloc(sizeof(struct student)*10);
int i,j,index,sum=0;
 char *a;
for(i=0;i<size;i++)
{
printf("enter the ID\n");
scanf("%d",&s1[i].id);
printf("enter the marks of student\n");
for(j=0,sum=0;j<6;j++)
{
scanf("%d",&s1[i].s[j]);
sum=sum+s1[i].s[j];
}
s1[i].per=sum*100/600;
printf("enter the father name\n");
scanf("%s",s1[i].fathername);
printf("enter the student name\n");
scanf("%s",s1[i].studentname);
printf("enter the date of birth\n");
scanf("%d%d%d",&s1[i].d,&s1[i].m,&s1[i].y);
printf("enter the date of joining\n");
scanf("%d%d%d",&s1[i].jd,&s1[i].jm,&s1[i].jy);
index=i;
}
Topper(s1);
}

void Topper(struct student s1[])
{
int i,sum=0,index;
float percent;
for(i=0;i<size;i++)
{
if(i==0)
{
percent=s1[i].per;
index=i;
}
if(i>=1)
{
if(s1[i].per>percent)
{
percent=s1[i].per;
index=i;
}
}
}
printf("topper name=%s\nfather name=%s",s1[index].studentname,s1[index].fathername);
for(i=0;i<6;i++)
{
printf("subject%d=%d\n",i+1,s1[index].s[i]);
sum=sum+s1[index].s[i];
}
printf("total marks=%d\n",sum);
printf("percentage=%f\n",s1[index].per);

}


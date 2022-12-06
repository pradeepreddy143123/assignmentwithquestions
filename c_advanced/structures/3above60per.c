#include<stdio.h>
struct date
{
int d,m,y;
};
struct student
{
char name[30];
char fname[30];
int sub[6];
float per;
struct date dob;
};
int datecompare(struct date date1,struct date date2)
{
if(date2.y>date1.y)
return 1;
else if(date2.y==date1.y && date2.m>date1.m)
return 1;
else if(date2.y==date1.y && date2.m==date1.m && date2.d>date1.d)
return 1;
else if(date2.y==date1.y && date2.m==date1.m && date2.d==date1.d)
return 1;
else
return 0;
}
int firstclass(struct student s)
{
if(s.per>=60)
return 1;
else
return 0;
}
int topper(struct student s[],int n)
{
int topper,i;
float m;
for(i=0;i<n;i++)
{
if(i==0)
{
topper=i;
m=s[i].per;
}
else
{
if(s[i].per>m)
{
topper=i;
m=s[i].per;
}
}
}
return topper;
}

int main()
{
int i,j,n;
int x,z;
struct student s[10];
struct date elder,date1,date2;
printf("enter how many students:");
scanf("%d",&n);
printf("enter student name,fathername,6 sub marks,date of birth:\n");
for(i=0;i<n;i++)
s[i].per=0;
for(i=0;i<n;i++)
{
printf("for student %d:\n",i+1);
scanf("%s %s",s[i].name,s[i].fname);
for(j=0;j<6;j++)
scanf("%d",&s[i].sub[j]);
scanf("%d %d %d",&s[i].dob.d,&s[i].dob.m,&s[i].dob.y);
}
for(i=0;i<n;i++)
for(j=0;j<6;j++)
s[i].per +=s[i].sub[j];
for(i=0;i<n;i++)
s[i].per = s[i].per/6.0;
for(i=0;i<n;i++)
{
if(i==0)
{
date1.d=s[i].dob.d;date1.m=s[i].dob.m;date1.y=s[i].dob.y;
}
else
{
if(i==1)
{
date2.d=s[i].dob.d;date2.m=s[i].dob.m;date2.y=s[i].dob.y;
if(datecompare(date1,date2))
{
elder.d=date1.d;elder.m=date1.m;elder.y=date1.y;x=i;
}
else
{
elder.d=date2.d;elder.m=date2.m;elder.y=date2.y;x=i;

}
}
else
{
date1.d=elder.d;date1.m=elder.m;date1.y=elder.y;
date2.d=s[i].dob.d;date2.m=s[i].dob.m;date2.y=s[i].dob.y;
if(datecompare(date1,date2))
{
elder.d=date1.d;elder.m=date1.m;elder.y=date1.y;
}
else
{
elder.d=date2.d;elder.m=date2.m;elder.y=date2.y;x=i;
}
}
}
}
printf("%s person has elder age : %d-%d-%d\n",s[x].name,elder.d,elder.m,elder.y);
for(i=0;i<n;i++)
printf("percent of stu[%d]=%f\n",i+1,s[i].per);
z=topper(s,n);
printf("topper= %s\nfathername= %s\npercent= %f\n",s[z].name,s[z].fname,s[z].per);
printf("students who got more than 60%%:\n");
for(i=0;i<n;i++)
if(firstclass(s[i]))
printf("%s\n",s[i].name);
}

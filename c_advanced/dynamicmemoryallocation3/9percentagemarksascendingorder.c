/*9) Sort the above student array based on their percentage of marks in ascending order.*/



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
void sortingpercentage(struct student []);
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
sortingpercentage(s1);
for(i=0;i<size;i++)
{
printf("%f\n",s1[i].per);
}

}
void sortingpercentage(struct student s1[])
{
int i,j;
float percent;
for(i=0;i<size-1;i++)
{
for(j=0;j<size-i-1;j++)
{
if(s1[j].per>s1[j+1].per)
{
percent=s1[j].per;
s1[j].per=s1[j+1].per;
s1[j+1].per=percent;
}
}
}
}


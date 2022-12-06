 /*7) 
create a student structure dynamically and read and print the data of the student. (student template same as used previously)
*/
#include<stdio.h>
#include<stdlib.h>
#define SIZE 6
struct stu
{
 int ID;
 char name[30];
 int d,m,y;
 int marks[SIZE];
 char fname[20];
 int dj,mj,yj;
 float per;
};
void percentage(float *per,int marks[])
{
 int i,sum=0;
 for(i=0;i<SIZE;i++)
  sum=sum+marks[i];
 *per=(sum*100/600);
}
int main()
{ 
 int i;
 struct stu *s=(struct stu *)malloc(sizeof(struct stu));
 printf("enter the student ID,NAME & date of birth(d,m,y)\n");
 scanf("%d %s %d %d %d",&s->ID,s->name,&s->d,&s->m,&s->y);
 printf("enter the 6 subjects marks\n");
 for(i=0;i<SIZE;i++)
  scanf("%d",&s->marks[i]);
 printf("enter father name & date of joining(dj,mj,yj)\n");
 scanf(" %s %d %d %d",s->fname,&s->dj,&s->mj,&s->yj);
 percentage(&s->per,s->marks);
 printf("enter the student ID=%d\nstudent NAME=%s\n date of birth=%d-%d-%d\n",s->ID,s->name,s->d,s->m,s->y);
 printf("6 subjects marks are\n");
 for(i=0;i<SIZE;i++)
  printf("subject%d=%d\n",i+1,s->marks[i]);
 printf("enter father name=%s\ndate of joining=%d-%d-%d\npercentage=%f\n",s->fname,s->dj,s->mj,s->yj,s->per);
 return 0;
}

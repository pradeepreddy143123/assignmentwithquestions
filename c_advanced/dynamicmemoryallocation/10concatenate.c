#include<stdio.h>
#include<stdlib.h>
char *mystrncat(char s1[],char s2[],int n,int m)
{
int i,j;
for(i=0;i<n;i++);
for(j=0;j<m;i++,j++)
{
s1[i]=s2[j];
}
return s1;
}



int main()
{
int n,m;
char *s1=(char *)malloc(n*sizeof(char));
char *s2=(char *)malloc(n*sizeof(char));
printf("enter the two strings\n");
scanf("%s%s",s1,s2);
printf("enter the first input substring\n");
scanf("%d",&n);
printf("enter the second input substring\n");
scanf("%d",&m);
char *p=mystrncat(s1,s2,n,m);
printf("%s",p);
}


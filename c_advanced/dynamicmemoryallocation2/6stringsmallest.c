#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int mystrcmp(char[],char[]);
int main()
{
char *ch1 =(char *)malloc(sizeof(int));
char *ch2 =(char *)malloc(sizeof(int));
int i,n,a;
printf("enter the how many strings do you want repete \n");
scanf("%d",&n);
printf("enter the first strings\n");
scanf("%s",ch1);
for(i=1;i<n;i++)
{
printf("enter the strings\n");
scanf("%s",ch2);
a=mystrcmp(ch1,ch2);
if(a>=0)
{
strcpy(ch1,ch2);
}
}
printf("the smallest string=%s\n",ch1);
return 0;
}

int mystrcmp(char ch1[],char ch2[])
{
int i,j,d;
for(i=0,j=0;ch1[i]!=0&&ch2[j]!=0;i++,j++)
{
if(ch1[i]>ch2[j])
{
d=ch1[i]-ch2[j];
return d;
}
else if(ch1[i]<ch2[j])
{
d=ch1[i]-ch2[j];
return d;
}
}
if(ch1[i]>ch2[j])
{
d= ch1[i]-ch2[j];
return d;
}

else if(ch1[i]<ch2[j])
{
d=ch1[i]-ch2[j];
return d;
}
else
return 0;

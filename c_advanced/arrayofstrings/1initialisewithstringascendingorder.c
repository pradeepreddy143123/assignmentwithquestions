#include<stdio.h>
void mystrcpy(char *s3,char *s2);
int mystrcmp(char s4[],char s5[]);
int main()
{
char a[10];
int n,b,i,j;
char s1[7][50]={"monday","tuesday","wednesday","thursday","friday"};
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
b=mystrcmp(s1[j],s1[j+1]);
if(b>0)
{
mystrcpy(a,s1[j+1]);
mystrcpy(s1[j+1],s1[j]);
mystrcpy(s1[j],a);
}
}
}
for(i=0;i<5;i++)
{
printf("%s\n",s1[i]);
}
}  


void mystrcpy(char *s3,char *s2)
{
int i;
for(i=0;s2[i]!=0;i++)
{
s3[i]=s2[i];
}
s3[i]='\0';
}

int mystrcmp(char s4[],char s5[])
{
int i,a;
for(i=0;s4[i]!=0&&s5[i]!=0;i++)
{
a=s4[i]-s5[i];
if(a>0)
return 1;
else if(a<0)
return 0;
}
}









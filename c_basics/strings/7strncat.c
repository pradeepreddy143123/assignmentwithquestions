#include<stdio.h>
void mystrncat(char d[],char s[],int n)
{
int i;
for(i=0;d[i]!=0;i++);
for(i=0;i<n;i++)
{
d[i]=s[i];
}
d[i]=0;
}


int main()
{
int i,n;
char d[]={"pradeep"};
char s[]={"reddy"};
printf("enter the number of character\n");
scanf("%d",&n);
mystrncat(d,s,n);
printf("%s\n",d);
}

#include<stdio.h>
void mystrncpy(char d[], char s[],int n)
{
int i,j;
for(i=0;i<n;i++)
{
d[i]=s[i];
}
}

int main()
{
int n,i;
char d[]={"pradeep"};
char s[]={"reddy"};
printf("enter the number of characters\n");
scanf("%d",&n);
mystrncpy(d,s,n);
printf("after ncopy :%s\n",d);
}

#include<stdio.h>
#define n 3
#define m 20
int main()
{
int i,j;
char a[n][m];
printf("enter the string\n");
for(i=0;i<n;i++)
{
scanf("%s",a[i]);
}
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
for(j=0;a[i][j]!=0;j++)
{
printf("%c",a[i][j]);
}
}
}

#include<stdio.h>
int main()
{
int i,j,a[2][2],search;
printf("enter a number\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the search elements\n");
scanf("%d",&search);
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
if(search==a[i][j])
{
printf("%d row %d column",i,j);
}
}
}
}



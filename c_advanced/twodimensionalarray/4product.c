#include<stdio.h>
int main()
{
int i,j,a[3][4],b[3][4],mul[3][4];
printf("enter a number\n");
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter a number\n");
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
mul[i][j]=a[i][j]*b[i][j];
printf("%d\t",mul[i][j]);
}
printf("\n");
}
}

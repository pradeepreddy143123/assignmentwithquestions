#include<stdio.h>
int main()
{
int i,j,a[3][4];
printf("enter the array elements\n");
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<4;i++)
{
for(j=0;j<3;j++)
{
printf("%d",a[j][i]);
}
printf("\n");
}
}

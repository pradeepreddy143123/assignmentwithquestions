#include<stdio.h>
int main()
{
int i,j,a[3][4],b[3][4],sum[3][4],sub[3][4];
printf("enter a number\n");
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
scanf("%d",&a[i][j]);
}
}
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
sum[i][j]=a[i][j]+b[i][j];
printf("%d",sum[i][j]);
}
printf("\n");
}


for(i=0;i<3;i++)
  {
  for(j=0;j<4;j++)
  {
  sub[i][j]=a[i][j]-b[i][j];
  printf("%d",sub[i][j]);
  }
  printf("\n");
  }
  }

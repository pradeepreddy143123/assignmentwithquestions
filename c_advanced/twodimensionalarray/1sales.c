#include<stdio.h>
int main()
{
int i,j,sales[2][2],items[2][2],total[2][2],sum=0,sum1=0;
printf("enter the numbers\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&sales[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
sum=sum+sales[i][j];
printf("%d\t",sum);
}
printf("\n");
}

printf("enter the numbers\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&items[i][j]);
}
}
for(i=0;i<2;i++) 
{
for(j=0;j<2;j++)
{
sum1=sum1+items[j][i];
printf("%d\t",sum1);
}
printf("\n");
}

printf("resultant matrix\n");
for(i=0;i<2;i++)  
{ 
for(j=0;j<2;j++)
{
total[i][j]=sales[i][j]+items[i][j];
printf("%d\t",total[i][j]);
}
printf("\n");
}
}


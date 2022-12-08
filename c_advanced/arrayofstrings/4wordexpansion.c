#include<stdio.h>
int main()
{
int i,n,n1,rem=0,sum=0,rem1,k;
char arr[10][7]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//for(i=0;i<10;i++)
//{
// printf("%s\t",arr[i]);
//}
printf("enter the number");
scanf("%d",&n);
n1=n;
while(n)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
while(sum)
{
rem1=sum%10;
printf("%s ",arr[rem1]);
sum=sum/10;
}

while(n1%10==0)
{
rem1=n1%10;
printf("%s ",arr[rem1]);
n1=n1/10;
}
printf("\n");
}

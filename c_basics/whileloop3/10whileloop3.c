#include <stdio.h>
int main()
{
int i,j=1,n,k;
printf("enter n number\n");
scanf("%d",&n);
for(i=1;i<=n;)
{
 printf("*");
 if(i==j)
 {
     printf("\n");
     i++;
     j=0;
   }
   j++;
 }
}

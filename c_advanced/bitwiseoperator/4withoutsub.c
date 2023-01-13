#include<stdio.h>
int main()
{
int a,b,sub;
printf("enter 2 nubers");
scanf("%d%d",&a,&b);
sub=a+(~(b)+1);
printf("%d",sub);
return 0;
}


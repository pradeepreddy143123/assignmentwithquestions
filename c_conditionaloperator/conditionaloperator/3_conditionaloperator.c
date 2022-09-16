#include<stdio.h>
int main()
{
int a,b,c, res;
printf("enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
res = a>b ? a>c ? a:c: b>c ? b:c;
printf("%d",res);
return 0;
}

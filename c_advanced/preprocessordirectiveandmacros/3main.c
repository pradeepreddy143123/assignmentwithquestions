#include"3calcheader.h"
//#define add(a,b) (a+b)
//#define sub(a,b) (a-b)
//#define mul(a,b) (a*b)
//#define div(a,b) (a/b)
int main()
{
int a,b;
printf("enter a number\n");
scanf("%d%d",&a,&b);

printf("add %d\n",add(a,b));
printf("sub %d\n",sub(a,b));
printf("mul %d\n",mul(a,b));
printf("div %d\n",div(a,b));
}

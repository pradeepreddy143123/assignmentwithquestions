//2)Rewrite the calculator program using array of function pointers.
#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}
int main()
{
	int a,b;
	int (*p[])(int,int)={add,sub,mul,div,mod};
	printf("enter the two numbers\n");
	scanf("%d %d",&a,&b);
	printf("add=%d\n",p[0](a,b));
	printf("sub=%d\n",p[1](a,b));
	printf("mul=%d\n",p[2](a,b));
	printf("quo=%d\n",p[3](a,b));
	printf("rem=%d\n",p[4](a,b));
	return 0;
}

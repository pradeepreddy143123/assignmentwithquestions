/*3)"Write the calculator program using a function that accepts a function pointer and the operand values as arguments and invokes it. In main function, simply invoke this function by sending appropriate function address, based on operator chosen.
eg.,
in main
case '+' :invokeptr(add , x,y);


invokeptr(int (*fptr) (int,int) , int x, int y)
{
printf(""%d\n"",fptr(x,y));
}"
*/
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
int calc(int (*p)(int,int),int a,int b)
{
return p(a,b);
}
int main()
{
int a,b;
printf("enter the two numbers\n");
scanf("%d %d",&a,&b);
char ch;
printf("enter the character\n");
scanf(" %c",&ch);
switch(ch)
{
case '+':printf("add=%d\n",calc(add,a,b));
		break;
case '-':printf("sub=%d\n",calc(sub,a,b));
		break;
case '*':printf("mul=%d\n",calc(mul,a,b));
		break;
case '/':printf("quo=%d\n",calc(div,a,b));
		break;
case '%':printf("rem=%d\n",calc(mod,a,b));
		break;

}

}

/*4)
"Write the calculator program using a function that accepts an array of function pointers and the operand values and operator character as arguments and invokes appropriate function based on the character. In main function, simply invoke this function by sending the array and operator character and operands as input.
eg.,
in main
case '+' :invokeptr( fparr, x,y, ch);


invokeptr(int (*fptr[]) (int,int) , int x, int y ,char ch)
{
//based on ch value, choose which index to apply on fptr and invoke the function
}*/
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
void fun_arr(int (*p[])(int,int),int a,int b,char ch)
{
switch(ch)
{
case '+':printf("add=%d\n",p[0](a,b));
	break;
case '-':printf("sub=%d\n",p[1](a,b));
	break;
case '*':printf("mul=%d\n",p[2](a,b));
	break;
case '/':printf("quo=%d\n",p[3](a,b));
	break;
case '%':printf("rem=%d\n",p[4](a,b));
	break;

}
}
int main()
{
int a,b;
char ch;
printf("enter two numbers\n");
scanf("%d %d",&a,&b);
printf("enter the calculator character to perform operation\n");
scanf(" %c",&ch);
int (*calcu[])(int,int)={add,sub,mul,div,mod};
fun_arr(calcu,a,b,ch);
}

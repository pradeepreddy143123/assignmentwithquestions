/*4)
"Write the calculator program using a function that accepts an array of function pointers and the operand values and operator character as arguments and invokes appropriate function based on the character. In main function, simply invoke this function by sending the array and operator character and operands as input.
eg.,
in main
case '+' :invokeptr( fparr, x,y, ch);


invokeptr(int (*fptr[]) (int,int) , int x, int y ,char ch)
{
//based on ch value, choose which index to apply on fptr and invoke the function
}
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

void fun(int (*p[4]) (int,int) , int a, int b,char ch)
{
switch(ch)
 {
  case '+':printf("%d",p[0](a,b));break;
  case '-':printf("%d",p[1](a,b));break;
  case '*':printf("%d",p[2](a,b));break;
  case '/':printf("%d",p[3](a,b));break;
  }

}


int main()
{
int a,b;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
char ch;
printf("enter the character\n");
scanf(" %c",&ch);
int (*cal[])(int,int)={add,sub,mul,div};
fun(cal,a,b,ch);


}

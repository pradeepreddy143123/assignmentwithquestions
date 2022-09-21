#include<stdio.h>
int main()
{
int a,b;
char c;
printf("enter the numbers to calculate");
scanf("%d %c%d",&a,&c,&b);
switch(c)
{
case '+':
         printf("%d is a addition",a+b);
         break;
case'-':
        printf("%d is a subtraction",a-b);
        break;
case '*':
        printf("%d is a multiplication",a*b);
        break;
case '/':
        printf("%d is a division",a/b);
        break;
case '%':
        printf("%d is a modulus",a%b);
        break;
default:
printf("enter the valid number");
return 0;
}
}


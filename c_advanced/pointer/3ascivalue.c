#include<stdio.h>
int main()
{
char a,b,*p1,*p2;
printf("enter the character\n");
scanf(" %c",&a);
printf("enter the character2\n");
scanf(" %c",&b);
p1=&a;
p2=&b;

if(*p1>*p2)
{
printf("%c=p1 is bigger\n",*p1);
}

else
{
printf("p2 is bigger\n");
}
}


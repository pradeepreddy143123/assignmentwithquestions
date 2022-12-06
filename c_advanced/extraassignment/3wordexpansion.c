#include<stdio.h>
int wordexpansion(char str[])
{
int i,b=0;
for(i=0;str[i]!='\0';i++)
{
b=str[i]-48;
switch(b)
{
case 1:
printf("one ");
break;
case 2:
printf("two ");
break;
case 3:
printf("three ");
break;
case 4:
printf("four ");
break;
case 5:
printf("five ");
break;
case 6:
printf("six ");
break;
case 7:
printf("seven ");
break;
case 8:
printf("eight ");
break;
case 9:
printf("nine ");
break;
case 0:
printf("zero ");
break;
}
}

printf("\n");
}
int main()
{
char str[100],d;
printf("enter number\n");
scanf("%s",str);
d=wordexpansion(str);
}

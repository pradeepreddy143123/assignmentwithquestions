#include<stdio.h>
int main()
{
char c;
printf("enter a alphabet");
scanf("%c",&c);
switch (c<='z'&&c>='a')
{
case 1:printf("%c=reverse alphabet",c-32);
      break;
default:
switch (c<='Z'&&c>='A')
{
case 1:printf("%c=reverse  alphabet",c+32);
       break;
case 0:printf("not alphabet\n");
       break;
return 0;
}
}
}

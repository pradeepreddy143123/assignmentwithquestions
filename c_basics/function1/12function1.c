#include<stdio.h>
char reverse(char ch)
{
switch(ch>='a'&&ch<='z')
	{
		case 1:printf("reverse case %c",ch-32);
		       return 1;
		default:
		       switch(ch>='A'&&ch<='Z')
		       {
			       case 1:printf("reverse case %c",ch+32);
				     break; 
			       case 0:printf("not alphabet");
				     break;
			return 0;
		       }
	}
}
int main()
{
char c;
printf("enter the character");
scanf(" %c",&c);
c=reverse(c);
if(c==1)
{
printf("%c",c);
}
else
{
printf("%c",c);
}
}


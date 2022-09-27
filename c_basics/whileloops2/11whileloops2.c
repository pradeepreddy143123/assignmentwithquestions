#include<stdio.h>
int main()
{
	int i=1,a,b,c=1,d=1;
	char choose,ch;
	while(d)
	{
	printf("enter two numbers");
	scanf("%d %c %d",&a,&ch,&b);
			if(ch=='+')
			{
				printf("addition is %d",c=a+b);
			}
			else if(ch=='-')
			{
				printf("substraction is %d",c=a-b);
			}
			else if(ch=='*')
			{
				printf("multiplication is %d",c=a*b);
			}
			else if(ch=='/')
			{
				printf("division is %d",c=a/b);
			}
			else if(ch=='%')
			{
				printf("modulus is %d",c=a%b);
			}
			printf("\ny=continue\n n=stop\n");
			scanf(" %c",&choose);
			{
				if(choose=='n')
				{
					d=0;
				}
				else if(choose=='y')
				{
					d=1;
				}
				i++;
			}
}
	return 0; 
}

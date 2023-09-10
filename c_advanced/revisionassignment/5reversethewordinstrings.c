/*5)  write a program to reverse the words in a string.
  eg., input : Kernel Masters is best for embedded.
output : embedded for best is Masters Kernel."*/

#include<stdio.h>
void fun1(char[]);
void fun2(char[]);
int main()
{
	char s[100];
	printf("enter the string\n");
	scanf("%[^\n]s",s);
	fun1(s);
	fun2(s);
	printf("%s",s);
	return 0;
}
void fun1(char s[])
{
	int i,j,temp,a,k;
	for(i=0;s[i]!=0;i++);

	a=i-1;
	for(j=0,k=a;j<k;j++,k--)
	{
		temp=s[j];
		s[j]=s[k];
		s[k]=temp;
	}
	
}
void fun2(char s[])
{
	int i,k,temp,a,j=0;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==' ')
		{
			a=i-1;
			for(k=a;j<k;j++,k--)
			{
				temp=s[j];
				s[j]=s[k];
				s[k]=temp;
			}
			j=i+1;
		}

		// if(s[i]==' ')
		// continue;

	}
	if(s[i]=='\0')
	{
		a=i-1;
		for(k=a;j<k;j++,k--)
		{
			temp=s[j];
			s[j]=s[k];
			s[k]=temp;
		}
		j=i+1;

	}
}

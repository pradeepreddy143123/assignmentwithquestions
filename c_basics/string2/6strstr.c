#include<stdio.h>
int mystrstr(char str[],char sub[])
{
	int i,j,a;
	for(i=0;str[i]!=0;i++)
	{
		a=i;
		for(j=0;sub[j]!=0;j++,a++)
		{
			if(str[a]==sub[j])
				continue;

			else
				break;
		}
	if(sub[j]==0)
		return i;

	}

return -1;
}
int main()
{
	char str[100];
	char sub[100];
	int b=0;
	printf("enter a string\n");
	scanf("%s",str);
	printf("enter the substring\n");
	scanf("%s",sub);
	b=mystrstr(str,sub);
	if(b>=0)
	{
		printf("given sub is matched with index number=%d\n",b);
	}
	else
	{
		printf("given sub is not matched with main string\n");
	}
}


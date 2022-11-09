#include<stdio.h>
char *mystrstr(char str[],char sub[])
{
	int i,j,a;
        char *r=str,*p,*q=sub;
	for(;*str;str++)
	{
		p=str;
		sub=q;
		for(;*sub;)
		{
			if(*p==*sub)
			{
                            p++;
                            sub++;

			//	continue;
			}

			else
				break;
		}
           
            
	if(*sub==0)
		return str;

	}

return 0;
}
int main()
{
	char str[100];
	char sub[100];
	printf("enter a string\n");
	scanf("%s",str);
	printf("enter the substring\n");
	scanf("%s",sub);
	char *b=mystrstr(str,sub);
	if(b==0)
	{
		printf("given sub is not found \n");
	}
	else
	{
		printf("given sub is  matched  with  string =%s",b);
	}
}



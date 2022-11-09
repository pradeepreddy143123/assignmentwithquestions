#include<stdio.h>
char *mystrreplacestr(char str[],char sub1[],char sub2[])
{

        char *r=str,*p,*q=sub1,*t=sub2;
	for(;*str;str++)
	{
		p=str;
		sub1=q;
		for(;*sub1;sub1++,p++)
		{
			if(*p != *sub1)
				break;
		}
	if(*sub1==0)
	{
	p = str;
	for(;*sub2;sub2++,p++)
	*p = *sub2;
	break;
	}

}

		return r;
}

int main()
{
	char str[100];
	char sub1[100];
        char sub2[100];
	printf("enter a string\n");
	scanf("%s",str);
	printf("enter the substring1\n");
	scanf("%s",sub1);
        printf("enter the input of substring2\n");
        scanf("%s",sub2);
	char *b=mystrreplacestr(str,sub1,sub2);
	if(b==0)
	{
		printf("given sub is not found \n");
	}
	else
	{
		printf("given sub is  matched  with  string =%s",b);
	}
}



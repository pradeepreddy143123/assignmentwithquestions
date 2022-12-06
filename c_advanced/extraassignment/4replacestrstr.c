#include<stdio.h>
int cmp(char str[],char sub[],int i)
{
	int j;
	for(j=0;sub[j]!='\0';j++,i++)
	{
		if(sub[j]==str[i])
                 {
			// printf("cmpcontinue:%d\n",j);
			continue;}
		else

			return 0;
	}
	return 1;
}
int mystrstrreplace(char str[],char sub[],char replace[])
{
	int a=0,i,j,k;
	for(i=0;str[i]!=0;i++)
	{
		if(cmp(str,sub,i))
		{
			k=i;
			for(j=0;replace[j]!=0;j++,k++)
				str[k]=replace[j];
			a++;
			// printf("break:%d\n",i);
		}
		else{
			// printf("continue:%d\n",i);
			continue;}
	}
	return a;
}
int main()
{
	char str[100],sub[100],replace[20];
	int a;
	printf("enter string\n");
	scanf(" %[^\n]s",str);
	printf("enter sub string\n");
	scanf(" %[^\n]s",sub);
	printf("enter replace string\n");
	scanf("%s",replace);
	a=mystrstrreplace(str,sub,replace);
	if(a>0)
		printf("output:%s\n",str);
	else
		printf("not found\n");
}

//9) Create a two dimentional array (array of strings) using a double pointer and sort the strings alphabetically. Here number of strings, and each string size, both are decided during runtime.\\


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char **p1,char **p2);
int mystrcmp(char *s4,char *s5);
int main()
{
	char a[50];
	int n,b,i,j,r;
	printf("enter number of strings\n");
	scanf("%d",&r);
	char **s1=(char **)malloc(r*sizeof(char *));
	for(i=0;i<r;i++)
	{
		int c=20;
		char str[100];
		scanf("%s",str);
		c=strlen(str);
		s1[i]=(char *)malloc(c+1);
		strcpy(s1[i],str);
	}
	for(i=0;i<r-1;i++)
	{
		for(j=0;j<r-i-1;j++)
		{
			b=mystrcmp(s1[j],s1[j+1]);
			if(b>0)
			{
				swap(&s1[j],&s1[j+1]);
			}
		}
	}
	for(i=0;i<r;i++)
	{
		printf("%s\n",s1[i]);
	}
	for(i=0;i<r;i++)
	{
		free (s1[i]);
	}  
	free(s1);
}



void swap(char **p1,char **p2)
{
	char *t;
	t=*p1;
	*p1=*p2;
	*p2=t;
}


int mystrcmp(char *s4,char *s5)
{
	int i,a;
	for(i=0;s4[i]!=0&&s5[i]!=0;i++)
	{
		a=s4[i]-s5[i];
		if(a>0)
			return 1;
		else if(a<0)
			return 0;
	}
}





#include<stdio.h>
#include<stdlib.h>
#define size 10

int push(int s[],int t)
{

	if(t == size - 1)
		printf("stack is full\n");
	else
	{
		int n;
		scanf("%d",&n);
		t++;
		s[t]=n;
	}
}

int pop(int s[],int t)
{
	if(t == -1)
		printf("stack is full\n");
	else
	{
		printf("%d",s[t]);
		t--;
	}
}


int main()
{
	int s[size];
	int t = -1;
	int ch;
	while(1)
	{
		printf("choose 1)push 2)pop 3)exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : push(s,t);
				 break;
			case 2 : pop(s,t);
				 break;
		
                      case 3 : exit(0);
			       break;
		}
	}
}

#include<stdio.h>
int main()
{
	int num[10],i=0,bi=0,ib,c=0;
	printf("enter a number");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}

	for(i=0;i<10;i++)
	{
		if(num[i]>bi)
		{
			bi=num[i];
			
		}
}
		for(i=0;i<10;i++)
		{
			if(bi==num[i])
				c++;
		}
	


	printf("biggest=%d\n %d\n",bi,c);

}



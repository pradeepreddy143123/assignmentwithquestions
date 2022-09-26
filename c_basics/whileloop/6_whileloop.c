#include<stdio.h>
int main()
{
	int a,b,i,n,j;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the  number");
	scanf("%d",&a);
	i=0; 
	j=a ;
	while(i<n-1)
	{
		scanf("%d",&j);
		if(a>j)
		{
			printf("%d a is bigger %d\n",a,j);
		}
		else if(a<j)
		{
			printf("%d a is smaller=%d\n",a,j);
		}
		else
		{
			printf("both are equal");
		}
		j=a;
		i++;
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i,n,x,a;
	printf("enter number of values");
	scanf("%d",&n);
        printf("enter the number");
        scanf("%d",&a);
	x=a;
	while(i<n-1)
	{
		scanf("%d",&a);
 if(a>x)
		{
			x=a;
			i++;
		}
else
{
printf("sorry that is smaller than previous value");
}

}
printf("thankyou for successful inputs");
return 0;
}


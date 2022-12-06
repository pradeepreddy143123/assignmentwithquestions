#include<stdio.h>
#include<stdlib.h>
void *myrealloc(int *p, int d);

int main()
{
	int a,i;
	int *p;
	p=(int *)malloc(10*sizeof(int));
	if(p==NULL)
	{
		printf("heap is full");
		exit(1);
	}
	printf("enter values to array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("enter a new size\n");
	scanf("%d",&a);

	p=myrealloc(p,a);
	for(i=0;i<a;i++)
		printf("%d",p[i]);
}


void  *myrealloc(int *p,int d)
{
	int i=0;
	int *a=(int *)malloc(d*sizeof(int));
	for(i=0;i<10;i++)
	{
		a[i]=p[i];
	}
	free(p);
	return a;
}


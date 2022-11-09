#include<stdio.h>
#define pnum(i,j) (i%j==0)
#define prime(c) (c==2)
#define primenum(i) for(j=1,c=0;j<=i;j++)\
                  {\
                          if(pnum(i,j))\
                                  c++;\
                  }\
                  if(prime(c))\
                  {\
                         printf("%d prime number\n",i);\
                  }

int main()
{
	int num,n,i,j,c;
	scanf("%d%d",&num,&n);
	for(i=num;i<=n;i++)
	{
		primenum(i)
        }
}


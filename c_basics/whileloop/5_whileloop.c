#include<stdio.h>
int main()
{
	int i,n,s1,s2,s3,s4,s5,s6,per;
	i=1;
	printf("enter the number of students\n");
	scanf("%d",&n);
	while (i<=n)
	{
		printf("enter the marks of student%d\n",i);
		scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
		per=(s1+s2+s3+s4+s5+s6)/6;
			if(per>=80&&per<=100)
				printf("honours\n");
			else if(per>=60&&per<=79)
				printf("first divison\n");
			else if(per>=50&&per<=59)
				printf("second division\n");
			else if(per>=40&&per<=49)
				printf("third division\n");
			else if(per>=39&&per<=0)
				printf("fail\n");
			i++;
	}
return 0;
}


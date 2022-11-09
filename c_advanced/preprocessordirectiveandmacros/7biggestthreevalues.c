#include<stdio.h>
	
#define BIGGESTOFTHREE(x,y,z) x>y?(x>z?x:z):(y>z?y:z)
	
#define BIGGESTOFTHREE(x,y,z) x>y?(x>z?x:z):(y>z?y:z)
	
#define BIGGESTOFTHREE(x,y,z) x>y?(x>z?x:z):(y>z?y:z)
	
#define BIGGESTOFTHREE(x,y,z) x>y?(x>z?x:z):(y>z?y:z)
	
int main()
	
{
	
	int a,b,c;
	
	float d,e,f;
	
	char g,h,i;
	
	double j,k,l;
	
	printf("enter three integer numbers\n");
	
	scanf("%d%d%d",&a,&b,&c);
	
	printf("biggest of 3 is:%d\n",BIGGESTOFTHREE(a,b,c));
	
	printf("enter three float numbers\n");
	
	scanf("%f%f%f",&d,&e,&f);
	
	printf("biggest of 3 is:%f\n",BIGGESTOFTHREE(d,e,f));
	
	printf("enter three characters\n");
	
	scanf(" %c %c %c",&g,&h,&i);
	
	printf("biggest of 3 is: %c\n",BIGGESTOFTHREE(g,h,i));
	
	printf("enter three double numbers\n");
	
	scanf("%lf%lf%lf",&j,&k,&l);
	
	printf("biggest of 3 is:%lf\n",BIGGESTOFTHREE(j,k,l));
	

	
}
	

	


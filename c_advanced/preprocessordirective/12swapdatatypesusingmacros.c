//define a macro to generate swapping function for int, float , double and character datatypes, as a generic function using macros.\\


#include<stdio.h>
#define GENSWAP(d,f)  void swap##d(d a,d b)\
{\
	d c;\
	c=a;\
	a=b;\
	b=c;\
	printf(""#f" "#f" \n",a,b);\
}




	GENSWAP(int,%d)
	GENSWAP(float,%f)
	GENSWAP(double,%lf)
int main()
{
	int a=4,b=5;
	float w=3.14, z=4.15;
	double x=23234.23, y=324.126;
	swapint(a,b);
	swapfloat(w,z);
	swapdouble(x,y);
}

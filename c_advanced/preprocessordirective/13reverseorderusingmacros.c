//define a macro to generate a generic function that takes prints an array in reverse order. Generate the functions for int, float, double data types.

#include<stdio.h>
#define size 10
#define genreverse(dt,f) void reverse##dt(dt arr[])\
                              	{\
                                int i;\
                                for(i=size-1;i>=0;i--)\
                            	printf(""#f"\n",arr[i]);\
                                }
                          
	genreverse(int,%d)
	genreverse(float,%f)
        genreverse(double,%lf)

int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	float arrf[10]={1.5,2.3,3.5,4.5,6.5,7,8,9,10};
	double arrd[10]={12223.34365,555588.2225,8884.224,54,8,9,2,10,8,5};
        reverseint(arr);
        reversefloat(arrf);
        reversedouble(arrd);
}

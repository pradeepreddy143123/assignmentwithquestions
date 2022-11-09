#include<stdio.h>
#define size 5
#define gensum(dt,f)  dt sum##dt(dt arr[])\
                      {\
                      int i;dt n=0;\
                      for(i=0;i<size-1;i++)\
                      n=arr[i]+n;\
                       return n;\
                      }
gensum(int,%d)
gensum(float,%f)
gensum(double,%lf)
int main()
{
int n;
float s;
double k;
int arr[5]={1,2,3,4,5};
float arrf[5]={1.1,2.2,3.4,4.5,5};
double arrd[5]={1,2,3,4,5};
sumint(arr);
printf("%d\n",sumint(arr));
s=sumfloat(arrf);
printf("%f\n",s);
k=sumdouble(arrd);
printf("%lf\n",k);
}


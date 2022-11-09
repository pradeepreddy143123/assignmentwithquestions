 #include<stdio.h>
#define SIZE 5
#define ADD(sum) for(i=0;i<SIZE;i++)\
{\
sum=sum+arr[i];\
}\
printf("%d\n",sum);\

int main()
{
int sum=0,i,j,arr[SIZE];
printf("enter the array\n");
for(i=0;i<SIZE;i++)
scanf("%d",&arr[i]);
ADD(sum);
}

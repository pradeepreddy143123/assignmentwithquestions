/*8)  "Complete the below program :
const int x;
const int * ptr;
ptr = &x;
x value cannot be changed using x or *ptr. Do it indirectly."*/


#include<stdio.h>
int main()
{
int x=5,y=10;
int const*ptr;
ptr=&y;
int **p=&ptr;
printf("%d\n",y);
}

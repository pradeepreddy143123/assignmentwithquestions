#include<stdio.h>
int main()
{
int x=10,y=20,z=30,*p;
p=&x;
p=&y;
p=&z;
printf("%d\n %d\n %d\n ",*p,*p,*p);
}


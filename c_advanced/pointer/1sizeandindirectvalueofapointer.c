#include<stdio.h>
int main()
{/*
 int x=10,y=20,z=30;
 int *p;
*p=20;
 p=&y;
*p=x;
p=&z;
printf("%d\n %d\n %d\n %d\n",x,y,z,*p);
}

int *p1,*p2,*p3;
int x=10;
p1=p2=p3=&x;
*p2=20;
x=*p1+*p2+*p3;
printf("%d\n %d\n %d\n %d\n",*p1,*p2,*p3,x);
}
*/

int x=10;
int *p1;

float y=4.567;
float *p2;

char c='^';
char *p3;

p1=&x;
p2=&y;
p3=&c;

printf("%p\n%p\n%p\n",p1,p2,p3);
printf("%d\n%f\n%c\n",*p1,*p2,*p3);
printf("%ld\n %ld\n %ld\n",sizeof(*p1),sizeof(*p2),sizeof(*p3));

*p1=50;
printf("%d\n",x);
}


#include<stdio.h>
void fun(int *a,int *b,float *p1,float *p2,float *p3,float *p4,float *p5);
int main()
{

int a,b;
float add,sub,mul,div;
float mod;
printf("enter a number\n");
scanf("%d%d",&a,&b);
fun(&a,&b,&add,&sub,&mul,&div,&mod);
printf("add=%f\nsub=%f\nmul=%f\ndiv=%f\nmod=%f\n",add,sub,mul,div,mod);
}
void fun(int *a,int *b,float *p1,float *p2,float *p3,float *p4,float *p5)
{
*p1=(*a)+(*b);
*p2=(*a)-(*b);
*p3=(*a)*(*b);
if(*b!=0)
*p4=(*a)/(*b);
if(*b!=0)
*p5=(*a)%(*b);
}

#include<stdio.h>
float simpleinterest(int p,int m,float r);
void main()
{
int p,m;
float r,amt;
printf("enter amount");
scanf("%d%d%f",&p,&m,&r);
amt=simpleinterest(p,m,r);
printf("%f",amt);
}
float simpleinterest(int p,int m,float r)
{
   int si;
   si=(p*m*r)/100;
   return(si+p);
}

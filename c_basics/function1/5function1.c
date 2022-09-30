#include<stdio.h>
int Isprime(int num)
{
int i,c=0;
for(i=1;i<=num;i++)
{
if(num%i==0)
c++;
}
if(c==2)
{
return 1;
}
else
{
return 0;
}
}
void allprimes(int m,int n)
{
int i,x,num;
for(i=m;i<=n;i++)
{
x=Isprime(i);
if(x==1)
printf("%d\n",i);

}
}
int main()
{
int m,n;
printf("enter two numbers");
scanf("%d%d",&m,&n);
allprimes(m,n);
return 0;
} 

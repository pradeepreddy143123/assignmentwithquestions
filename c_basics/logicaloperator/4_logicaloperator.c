#include<stdio.h>
int main()
{
float a,b,c,d,e,f,g,per;
printf("enter the subjects");
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
per=(float)(a+b+c+d+e+f)/6;
printf("%f",per);
if(per>=0&&per<=39)
{
printf("fail");
}
else if(per>=40&&per<=49)
{
printf("third division");
}
else if(per>=50&&per<=59)
{
printf("second division");
}
else if(per>=60&&per<=79)
{
printf("first division");
}
else if(per>=80&&per<=100)
{
printf("honours");
}
return 0;
}

#include<stdio.h>
int main()
{
int calls,bills;
printf("enter number of calls");
scanf("%d",&calls);
if(calls<100)
printf("%d",250);
else
calls=calls-100;
bills=250+calls*1.25;
printf("%d",bills);
return 0;
}

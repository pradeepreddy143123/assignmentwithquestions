#include<stdio.h>
int main()
{
int calls,bills;
printf("enter no of calls");
scanf("%d",&calls);
calls<=100 ? printf("call cost is 250/-\n") : printf("bills=%f\n",250+(calls-100)*1.25);
return 0;
}

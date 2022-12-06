


#include "1header.h"
int main()
{
struct student s1;
printf("enter Id,name,per\n");
scanf("%d%s%f",&s1.id,s1.name,&s1.per);
callbyvalue(s1);
callbyref(&s1);
}

/*
void callbyvalueconsumer(struct student s1)
{
printf("%d\n%s\n%f\n",s1.id,s1.name,s1.per);
}

void callbyreferenceconsumer(struct student *s)
{
printf("%d\n%s\n%f\n",s1->id,s1->name,s1->per);
}*/

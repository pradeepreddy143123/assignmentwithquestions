

#include<stdio.h>
struct student
{
	int id;
	char name[10];
	float per;
};
void callbyvalue(struct student s1);
void callbyref(struct student *s);



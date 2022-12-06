#include "1header.h"

void callbyvalue(struct student s1)
{
	printf("%d\n%s\n%f\n",s1.id,s1.name,s1.per);
}

void callbyref(struct student *s)
{
	printf("%d\n%s\n%f\n",s->id,s->name,s->per);
}


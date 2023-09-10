#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int id;
//	char name[100];
	struct student *next;
}
student;

student *create_node()
{
	student *new = (student *)malloc(sizeof(student));
	printf("Enter student ID:\n");
	scanf("%d",&new->id);
//	printf("Enter student name:\n");
//	scanf("%s",new->name);
	new->next = NULL;
	return new;
}


void printll(student *p)
{
	while(p)
	{
		printf("student ID : %d\n",p->id);
//		printf("student name : %s\n",p->name);
		p=p->next;
	}
}



student *sorting(student *t,student *n)
{
	student *l = t;
	student *s = l->next;

	if(l->id > n->id)
	{
		n->next = t;
		t = n;
		return t;
	}
	while(s && s->id < n->id)
	{
		s = s->next;
		l = l->next;
	}
	n->next = l->next;
	l->next = n;
	return t;
}



int main()
{
	char ch;
	student *h = NULL,*n = NULL,*l =   NULL;
	while(1)
	{
		n = create_node();
		if(n->id < 0)
			break;
		if(!h)
			h = n;
		else
		{
			h = sorting(h,n);
		}
		printf("\n");
		printf("want to create another node?\n");
		getchar();
		scanf("%c",&ch);
		if(ch=='n')
		{
			break;
		}

	}
	printll(h);
	printf("\n");
}

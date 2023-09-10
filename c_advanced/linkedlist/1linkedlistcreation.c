#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int id;
	char name[50];
	struct student *next;
}student;


student *createnode()
{
	student *new=(student *)malloc(sizeof(student));
	scanf("%d",&new->id);
	scanf("%s",new->name);
	new->next=NULL;
	return new;
}

void printLL(student *p)
{
	while(p)
	{
		printf("%d\n",p->id);
		printf("%s\n",p->name);
		p=p->next;
	}
}

int main()
{
	student *H=NULL,*N=NULL,*L=NULL;
	char ch;
	while(1)
	{
		N=createnode();
		if(!H)
			H=N;                       //first node is a new node we are storing in head
		else
		{
			L->next=N;                //last node to access we should take the address and store in second node
		}
		L=N;                      //To check the lastnode is present if value is there we can modify the node else we can not modify the node
		printf("want to create another node ?\n");
		getchar();
		scanf("%c",&ch);
		if(ch=='n')
		{
			break;
		}
	}
	printLL(H);    //to print the value

}

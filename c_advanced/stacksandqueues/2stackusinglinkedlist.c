
//2) Implement a stack using linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int ID;
	char name[10];
	struct student *next; //next pointer intialized.
}student;
//create node function.
student* createnode()
{
	student *new=(student*)malloc(sizeof(student));
	printf("enter ID of student\n");
	scanf("%d",&new->ID);
	printf("enter name of student\n");
	scanf("%s",new->name);
	new->next=NULL;
	return new;
}

student* stackpush(student *top)
{
	student *new=NULL,*L=NULL;
	new=createnode();

	if(top==0)
	{
		top=new;
	}
	else
	{
		L=top;
		top=new;
		top->next=L;
		printf("push succecs\n");
	}
	return top;
}

void stackpop(student **top)
{
	if(*top==NULL)
		printf("stack is emty\n");
	else{
		student *p=*top,*T=NULL;
		T=p;
		p=p->next;
		free(T);
		*top=p;
		printf("popping\n");
	}
}

//print all nodes data to know created r not
void print(student *p)
{
	while(p)
	{
		printf("%d%s\n",p->ID,p->name);
		p=p->next;
	}
}
//initialize 3 pointers with NULL in main for Traversal(to move node to node)

int main()
{
	student *H=NULL,*N=NULL,*T=NULL;
	char ch;
	int p,x,q,id,pos;
	while(1)
	{
		N=createnode();
		if(!H)
			H=N;                       //first node is a new node we are storing in head
		else
		{
			T->next=N;                //last node to access we should take the address and store in second node
		}
		T=N;                      //To check the lastnode is present if value is there we can modify the node else we can not modify the node
		printf("want to create another node ?\n");
		getchar();
		scanf("%c",&ch);
		if(ch=='n')
		{
			break;
		}
	}
	while(1)
	{	

		printf("(1)stackpush \n (2)stackpop \n (3)exit \n");
		printf("enter the options to choose\n");
		scanf("%d",&x);
		switch(x)
		{
			{
				case 1:H=stackpush(H);break;
				case 2:stackpop(&H);break;
				case 3 :break;
			}
			if(x==7)
				break;
			printf("\n");
			print(H);
		}


		print(H);


	}
}

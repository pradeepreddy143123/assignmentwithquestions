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
	printf("ID:");
	scanf("%d",&new->id);
	printf("\nName:\n");
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



student *insertatpos(student *H,int q)
{
	int i=1;
	student *T=H;
	student *N=NULL;
	N=createnode();
	if(q==1)
	{
		N->next=H;   //before the head and we are keeping the  new position
		return N;   //to return new address
	}
	else
	{
		while(i<(q-1) && T)
		{
			T=T->next; //to go to next position
			i++;
		}	
		if(T==NULL)
		{
			return H; //to return old address
		}
		N->next=T->next;
		T->next=N;
		return H;   //to return old address
	}
}



student *insertbeforekey(student **H,int id)
{
	int i;
	student *T=*H;
	student *N=NULL;
	N=createnode();
	if(T->id==id)
	{
		N->next=T; //if condition is true it will be in headposition only
		T=N;    // to initialize the base address
		*H=T;  //to return the base address

	}
	else
	{
		while(id != T->next->id)
		{
			T=T->next;     //to return new address and finding before node

			if(T->next==NULL)
			{
				printf("%d :key not in the list",id); //if node is null the it will be terminated
				goto one ;
			}
		}   

		N->next=T->next;  //if node address is there to check that address to change that value
		T->next=N;
one : printf("\n");   //to return old address
	}

}

student *afterthekeyinsertion(student *H,int p) //here p is position
{
	student *T=H;
	student *N=NULL;

	N=createnode();
	while(p!=H->id)
	{
		H=H->next;  //if the condition true after the node we have to place the value
		if(H==NULL)
		{
			printf("%d :key not in the list",p);
			return T;   //return T means to return old address
		}
	}
	N->next=H->next;
	H->next=N;
	return T; //to return old address
}

student *reversenode(student **H)
{

	student *prev=NULL;
	student *current=*H;
	student *next;
	while(current != NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	*H=prev;  //to return previous address
}

student *deletefirstnode(student *H,int pos)
{
	student *N=NULL;
	student *T=NULL;
	if(H==NULL)
	{
		printf("%d :list is empty",pos);
		return H;
	}
	if(pos == H->id)
	{       
		T=H;
		H=H->next;
		free(T);
		return H;
	}

}

student *deletionbeforeorend(student *H,int pos)
{
	student *N=NULL;
	student *T=H;
	while(H->next != NULL)
	{
		if(H->next->id == pos)
		{
			T=H->next;
			H->next=T->next;
			free(T);
			return H;
		}
		H=H->next;
	}
}





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

		printf("(1)insertnodeatbeggining\n (2)insertnodebeforekey\n (3)insertnodeafterkey \n (4)reversenode \n (5)deletfirstnode \n  (6)deletionbeforeorend \n (7)exit \n");
		printf("enter the options to choose\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1 :printf("choose a position\n");
				scanf("%d",&q); 
				H=insertatpos(H,q);
				break;
			case 2 :printf(" choose a position\n");
				scanf("%d",&id);
				insertbeforekey(&H,id);
				break;
			case 3 :printf("choose a position\n");
				scanf("%d",&p);
				H=afterthekeyinsertion(H,p);
				break;
			case 4 :reversenode(&H);
				break;
			case 5 :printf("choose a position\n");
				scanf("%d",&pos);
				H=deletefirstnode(H,pos);
				break;
			case 6 :printf("choose a position\n");
                                scanf("%d",&pos);
                                H=deletionbeforeorend(H,pos);
                                break;
				
			case 7 :break;
				}
				if(x==7)
				break;
				printf("\n");
				printLL(H);
		}


		printLL(H);


}


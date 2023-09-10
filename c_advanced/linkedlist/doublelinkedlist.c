//6) Implement creation, insertion, deletion and reversal of a double linked list.

//Linkedlist creation
//step:1:create self refferential structure tempate.
//initialize 3 pointers with NULL in main for Traversal(to move node to node)
//create node function. creating a structure dynamically.
#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
int ID;
char name[10];
struct student *next;
struct student *prev; //next pointer intialized.
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
new->prev=NULL;
return new;
}
//print all nodes data to know created r not

void printll(student *p)
{
while(p)
{
printf("%d%s\n",p->ID,p->name);
p=p->next;
}
}
//initialize 3 pointers with NULL in main for Traversal(to move node to node)
student * insertatposition(student * t,int p)
{
int i=1;
student *n=NULL,*h=NULL,*L=NULL;
h=t;
n=createnode();
if(p==1)
{
n->next=h;
return n;
}
else
{
while(i<(p-1) && t)
{
t=t->next;
i++;
}
if(t==NULL)
{
printf("you have only %d nodes but you entered %d\n",i-1,p);
return h;
}
L=t->next;
L->prev=n;
n->next=t->next;
t->next=n;
n->prev=t;
return h;
}
}

student * insertafterkey(student *t,int p)
{
student *n=NULL,*h=NULL,*L=NULL;
h=t;
n=createnode();
while(p != t->ID)
{
t=t->next;
if(t==NULL)
{
printf("key %d is not in list\n",p);
return h;
}

}
L=t->next;
n->next=L;
t->next=n;
n->prev=t;
if(L!=0)
L->prev=n;
return h;
}

void insertbeforekey(student **h,int p)
{
student *n=NULL,*t=NULL,*L=NULL;
t=*h;
n=createnode();
if(t->ID==p)
{
n->next=t;
t->prev=n;
t=n;
*h=t;
}
else
{
while(p!=t->next->ID)
{
t=t->next;
if((t->next)==NULL)
{
printf("key %d not in the list\n",p);
goto one;
}
}
L=t->next;
L->prev=n;
n->next=t->next;
n->prev=t;
t->next=n;
one: printf("\n");
}
}

student * deletionbynode(student *h,int p)
{
int i=1;
student *t=h,*n=NULL;
if(p==1)
{
n=h;
h=h->next;
free(n);
return h;
}
else
{
if(t->next==NULL)
{
printf("you entered wrong node\n");
return h;
}
while(i<(p-1) && t)
{
t=t->next;
i++;
if(t->next==NULL)
{
printf("you entered wrong node\n");
return h;
}
}
n=t->next;
t->next=n->next;
n->next->prev=t;
free(n);
return h;
}
}
void deletionbykey(student **h,int p)
{
student *n=NULL,*t=*h;
if((*h))
{
if(p==t->ID)
{
n=t;
t=t->next;
*h=t;
free(n);
}
else
{
while(p!=t->next->ID)
{
t=t->next;
if(t->next==NULL)
{
printf("key is not in the list\n");
goto one;
}
}
n=t->next;
t->next=n->next;
n->next->prev=t;
free(n);
one: printf("\n");
}
}
else
printf("there is no node to delete");
}

/*student * reverse(student *h)
{
student *p=NULL,*q=NULL,*r=NULL;
if(h)
{
if(h->next==NULL)
{
return h;
}
else if(h->next->next==NULL)
{
p=h;
h=h->next;
h->next=p;
p->next=NULL;
return h;
}
else
{
p=h;
q=p->next;
r=q->next;
while(q!=NULL)
{
q->next=p;
p=q;

*/

int main()
{
char ch;
int x,p;
student *h=NULL,*N=NULL,*L=NULL;
while(1)
{
N=createnode();
if(!h)
{
h=N;
}
else
L->next=N;
N->prev=L;

L=N;
printf("want to create another node\n");
scanf(" %c",&ch);
if(ch=='n')
break;
}
 while(1)
        {
                printf("1)insert at a position\n2)insert before a key\n3)insert after a key\n");
                printf("4)deletion based on position\n5)deletion based on key\n6)reverse list\n7)exit\n");
                printf("choose option:");
                scanf("%d",&x);
                switch(x)
                {
                        case 1: printf("which position:");
                                scanf("%d",&p);
                                h=insertatposition(h,p);
                                break;
                        case 2: printf("key number:");
                                scanf("%d",&p);
                                insertbeforekey(&h,p);
                                break;
                        case 3: printf("key number:");
                                scanf("%d",&p);
                                h=insertafterkey(h,p);
                                break;
                        case 4: printf("which node you want to delete:");
                                scanf("%d",&p);
                                h=deletionbynode(h,p);
                                break;
                        case 5: printf("which key you want to delete:");
                                scanf("%d",&p);
                                deletionbykey(&h,p);
                                break;
                //        case 6: h=reverse(h);break;
                        case 7: break;
                        default:printf("invalid option\n");break;
                }
                if(x==7)
                        break;
                printf("\n");

                printll(h);
        }

        printf("\nLinked List is:\n");
        printll(h);
}


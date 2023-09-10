//4) Implement a circular queue using array
#include<stdio.h>
#define SIZE 3
int enque(int q[],int r)
{
int n;
if(r==SIZE-1)
{
printf("queue is full\n");
r=-1;
}
printf("enter data\n");
scanf("%d",&n);
r++;
q[r]=n;
printf("enque success\n");
return r;
}
int deque(int q[],int f)
{
if(f==SIZE-1)
{
printf("queue is empty\n");
f=-1;
}
//printf("enter data\n");
//scanf("%d",&n);
f++;
printf("deque %d\n",q[f]);
return f;
}
int main()
{
int q[SIZE];
int r=-1,f=-1,ch;
while(1)
{
printf("choose 1)enque 2)deque 3)exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1: r=enque(q,r);
break;
case 2: f=deque(q,f);
break;
default:goto exit;
exit:return 0;
//printf("thankyou\n");
}
}
}



//3) Implement a queue using array
#include<stdio.h>
#define SIZE 3
int enque(int q[],int r)
{
int n;
if(r==SIZE-1)
{
printf("queue is full\n");
return r;
}
else
{
printf("enter data\n");
scanf("%d",&n);
r++;
q[r]=n;
printf("enque success\n");
return r;
}
}
int deque(int q[],int f)
{
if(f==SIZE-1)
{
printf("queue is empty\n");
return f;
}
else
{
//printf("enter data\n");
//scanf("%d",&n);
f++;
printf("deque %d\n",q[f]);
return f;
}
}
int main()
{
int q[SIZE];
int r=-1,f=-1,ch;
while(1)
{
printf("choose 1)enque 2)deque 3)exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1: r=enque(q,r);
break;
case 2: f=deque(q,f);
break;
default:goto exit;
exit:return 0;
//printf("thankyou\n");
}
}
}

#include<stdlib.h>
#include<stdio.h>
typedef struct student
{
int ID;
char name[10];
struct student *next; //next pointer intialized.
}student;
//create node function.
student* createnode()
{
student new=(student)malloc(sizeof(student));
printf("enter ID of student\n");
scanf("%d",&new->ID);
printf("enter name of student\n");
scanf("%s",new->name);
new->next=NULL;
return new;
}

student* queuepush(student *H) //insert new node in tail through traverse.
{
student *new=NULL,*R=NULL;
R=H;
new=createnode();

if(R==0)
{
R=new;
H=R;
}
else
{
while(!R->next==0)
{
R=R->next;
printf("push succecs\n");
}
R->next=new;
}
return H;
}

void queuepop(student **H) //Head delation and change it to next node
{
if(*H==NULL)
printf("stack is emty\n");
else{
student *p=*H,*T=NULL;
T=p;
p=p->next;
free(T);
*H=p;
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

int main()
{
int x;
char ch;
student *H=NULL,*N=NULL,*L=NULL;
while(1)
{
printf("choose option 1)pushque 2)popque 3)quit");
scanf("%d",&x);
switch(x)
{
case 1:H=queuepush(H);break;
case 2:queuepop(&H);break;
case 3:return 0;
}
print(H);
}
}


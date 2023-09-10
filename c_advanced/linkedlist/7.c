#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};

void insertatend(struct node *head,int data)
{
struct node *temp,*ptr;
ptr=head;
temp=(struct node *)malloc(sizeof(struct node));
temp->data=data;
temp->next=NULL;
while(ptr->next != NULL)
{
ptr=ptr->next;
}
ptr->next=temp;
}

int main()
{
struct node *head;
insertatend(head,10);
}

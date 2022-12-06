4) Write a swap function to swap the values of two character variables.
*/
#include<stdio.h>
#include<stdlib.h>
void swap(char *p1,char *p2)
{
 char temp;
 temp=*p1;
 *p1=*p2;
 *p2=temp;
}
int main()
{
 char *c1=(char *)malloc(sizeof(char));
 char *c2=(char *)malloc(sizeof(char));
 printf("enter the character\n");
 scanf("%c",c1);
 printf("enter another character\n");
 scanf(" %c",c2);
 printf("before swapping c1=%c\tc2=%c\n",*c1,*c2);
 swap(c1,c2);
 printf("after swapping c1=%c\tc2=%c\n",*c1,*c2);
}

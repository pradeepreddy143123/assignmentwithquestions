/*5) Read an integer and print it back using function pointers for printf and scanf.

printf declaration to use : int printf(char * , ...);
scanf declaration to use : int scanf(char *, ...);
*/
//#include<stdio.h>
int printf(char * , ...);
int scanf(char * , ...);
int main()
{
int a;
int (*p)(char * , ...);
p=printf;
p("enter a number\n");
p=scanf;
p("%d",&a);
p=printf;
p("entered value for a=%d\n",a);
return 0;

}

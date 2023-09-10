/*
5) Read an integer and print it back using function pointers for printf and scanf.
printf declaration to use : int printf(char * , ...);
scanf declaration to use : int scanf(char *, ...);

*/
int printf(char * , ...);
int scanf(char * , ...);


int main()
{
int b;
int (*p) (char * , ...);
p=printf;
p("enter a num\n");
p=scanf;
p("%d",&b);
p=printf;
p("entered value for b=%d",b);
}

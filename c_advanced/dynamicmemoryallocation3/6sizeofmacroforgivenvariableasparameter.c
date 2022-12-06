/*6) define a sizeof macro ,that will find the size of a given variable as parameter, using pointers. try to send a character array / character pointer / string constant as arguments and see what is the size returned, and understand the difference.*/
#include<stdio.h>
#include<stdlib.h>
#define SIZE(x) ((char *)(&x+1)-(char *)(&x))

int main()
{
char str[10];
char *p=(char *)'a';
char *q="khaja";
printf("size of character array=%lu\n",SIZE(str));
printf("size of character pointer=%lu\n",SIZE(p));
printf("size of string constant=%lu\n",SIZE(q));
return 0;
}

/*7)  "Complete the below program :
int x; int y;
int * const ptr = &x;
we cannot modify ptr to point to a different address using ptr directly. Do it indirectly."
*/

#include<stdio.h>
int main()
{
int x=5,y=10;
int *const ptr=&x;
int **pptr=&ptr;
*pptr=&y;
printf("%d\n",y);
}

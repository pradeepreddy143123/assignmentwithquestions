/*convert A-B*/

#include <stdio.h>
int main()
{
    int a,b,n,i,c=0;
    scanf("%d%d",&a,&b);
    n=a^b;
    for(i=0;n;i++)
    {
        n=(n&(n-1));
    }
    printf("%d",i);
}

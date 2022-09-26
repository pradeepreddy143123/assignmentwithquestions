#include<stdio.h>
int main()
{
int i=1,n;
char ch;

printf("enter no of characters");
scanf("%d",&n);
while(i<=n)
{
scanf(" %c",&ch);
if((ch<='z'&&ch>='a'||ch<='Z'&&ch>='A'))
{
printf("alphabet");
}
else
{
printf("not alphabet");
}    
i++;
}
return 0;
}




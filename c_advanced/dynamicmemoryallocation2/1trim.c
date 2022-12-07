#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char *a=(char *)malloc(10*sizeof(char)),c;
printf("%lu",sizeof(a));
int i,l,j,k,m;
printf("enter a string\n");
scanf("%[^\n]s",a);
for(i=0;a[i]!=0;i++);
for(j=0;a[j]==' ';j++);
for(k=i-1;a[k]==' ';k--);
k=k-j;
for(l=j,m=0;a[l]!='\0';l++,m++)
{
c=a[l];
a[m]=c;
}
a[k+1]='\0';
a=(char *)realloc(a,4*(sizeof(char)));
printf("%s",a);
free(a);
printf("\n");
printf("%s",a);

return 0;
}

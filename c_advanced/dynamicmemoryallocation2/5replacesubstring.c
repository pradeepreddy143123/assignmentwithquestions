  /*5) "Write a function that takes a main string and two sub strings (need not be same length), and replace every occurrence of first substring with the second substring in main string and return a new string as output.

eg., input : kernel  e   xxx

output: kxxxrnxxxl"
*/



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * mystrreplace(char [],char[],char[]);
int main()
{
char *main=(char *)malloc(sizeof(int));
char *subc2=(char *)malloc(sizeof(int));
char *replace=(char *)malloc(sizeof(int));
int i;
printf("enter main string \n");
scanf("%[^\n]s",main);
printf("enter substring\n");
scanf("%s",subc2);
printf("enter substringreplace\n");
scanf("%s",replace);
char * main1=mystrreplace( main,subc2,replace);
printf("%s",main1);
}
char* mystrreplace(char main[],char subc2[],char replace[])
{
int i=0,j=0,m,a,z=0;
static char k[100];
for(i=0;main[i]!=0;i++)
{
j=0;
if(main[i]==subc2[j])
{
m=i;
for(j=0;subc2[j]!=0;j++)
{
if(main[m]==subc2[j])
{
m++;
}
else
break;
}
if(subc2[j]==0)
{
for(j=0;replace[j]!='\0';j++)
{
k[z]=replace[j];
z++;
}i=m-1;
}
else
{
k[z]=main[i];
z++;
}
}
else
{
k[z]=main[i];
z++;
}
}

return k;
} 


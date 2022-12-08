//7) Read some sentences as input and convert the first letter of each word of every sentence to capital letter and print them back.
#include<stdio.h>
void lwrtoupr(char s[])
{
int i;
for(i=0;s[i]!=0;i++)
{
if(i==0)
{
if(s[i]!=' '&&(s[i]>='a'&&s[i]<='z'))
s[i]=s[i]-32;

}
if(i>=1)
{
if((s[i]==' '||s[i]==','||s[i]=='?'||s[i]=='.')&&(s[i+1]>='a'&&s[i+1]<='z'))
{
s[i+1]=s[i+1]-32;
i++;
}
}
}
}
int main()
{
int n,i;
printf("how many sentences you want to enter\n");
scanf("%d",&n);
char s[n][200];
for(i=0;i<n;i++)
{
printf("enter the sentence%d\n",i+1);
scanf(" %[^\n]s",s[i]);
lwrtoupr(s[i]);
printf("after converting sentence is\n%s\n",s[i]);
}
return 0;
}


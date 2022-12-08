//3) Declare a character pointer array ,initialise it with read only strings. Sort the array in ascending order of strings and print it  back.

#include<stdio.h>
#define r 7
#define c 15
/*void mystrcpy(char s1[],char s2[])
{
int i;
for(i=0;s2[i]!=0;i++)
{
s1[i]=s2[i];
}
s1[i]=0;
}*/
void swap(char *s1,char *s2)
{
char *temp;
temp=s1;
s1=s2;
s2=temp;
}
int mystrcmp(char s1[],char s2[])
{
int i;
for(i=0;s1[i]!=0&&s2[i]!=0;i++)
{
if(s1[i]>s2[i])
return s1[i]-s2[i];
else if(s1[i]<s2[i])
return s1[i]-s2[i];
}
if(s1[i]!=0&&s2[i]==0)
return s1[i]-s2[i];
else if(s2[i]!=0&&s1[i]==0)
return s1[i]-s2[i];
else
return 0;
}

void sorting(char *str[r])
{
int i,j;
char *temp;
for(i=0;i<r-1;i++)
{
for(j=0;j<r-i-1;j++)
{
if((mystrcmp(str[j],str[j+1]))>0)
{

temp=str[j];
str[j]=str[j+1];
str[j+1]=temp;

}
//swap(str[j],str[j+1]);
}
}
}
int main()
{
int i;
char *str[r];
str[0]="sunday";
str[1]="monday";
str[2]="tuesday";
str[3]="wednesday";
str[4]="thrusday";
str[5]="friday";
str[6]="saturday";
sorting(str);
for(i=0;i<r;i++)
printf("%s\n",str[i]);
return 0;
}


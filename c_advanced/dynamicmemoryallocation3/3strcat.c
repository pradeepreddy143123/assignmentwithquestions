/*3) Implement your own string concatenation function.

try calling the string copy function by sending the below as input:
1) string constant as destination and string variable as source
2) string variable as destination and string constant as source
3) string variable as destination and string variable as source
4) string constant as destination and string constant as source

note down the output and analyze the reasons.
*/
#include<stdio.h>
#include<stdlib.h>
void mystrcat(char s1[],char s2[])
{
int i,j;
for(i=0;s1[i]!=0;i++);
for(j=0;s2[j]!=0;j++,i++)
{
s1[i]=s2[j];
}
s1[i]=0;
}

//1) string constant as destination and string variable as source
/*
int main()
{
 char *p="suhail";
 char str[]="khaja";
 mystrcat(p,str);
 printf("%s\n",p);
}*/
//2) string variable as destination and string constant as source

int main()
{
 char *p="suhail";
 char str[20]="khaja";
 mystrcat(str,p);
 printf("%s\n",str);
}

//3) string variable as destination and string variable as source
/*
int main()
{
 char str1[20]="suhail";
 char str2[20]="khaja";
 mystrcat(str1,str2);
 printf("%s\n",str1);
}
*/
//4) string constant as destination and string constant as source

/*
int main()
{
 char *p="suhail";
 char *d="khaja";
 mystrcat(d,p);
 printf("%s\n",p);
}
*/

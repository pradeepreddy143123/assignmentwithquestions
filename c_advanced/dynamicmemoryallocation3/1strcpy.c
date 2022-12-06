/*1) implement your own string copy function.

try calling the string copy function by sending the below as input:
1) string constant as destination and string variable as source
2) string variable as destination and string constant as source
3) string variable as destination and string variable as source
4) string constant as destination and string constant as source

note down the output and analyze the reasons.
*/


#include<stdio.h>
void mystrcpy(char *p,char str[])
{
 int i;
 for(i=0;str[i]!=0;i++)
 {
  p[i]=str[i];
 }
 p[i]=0;
}
//1) string constant as destination and string variable as source

int main()
{
 char *p="kernel";
 char str[]="masters";
 mystrcpy(p,str);
 printf("%s\n",p);
}
//2) string variable as destination and string constant as source

int main()
{
 char *p="kernel";
 char str[]="masters";
 mystrcpy(str,p);
 printf("%s\n",str);
}

//3) string variable as destination and string variable as source

int main()
{
 char str1[]="kernel";
 char str2[]="masters";
 mystrcpy(str1,str2);
 printf("%s\n",str1);
}

//4) string constant as destination and string constant as source


int main()
{
 char *p="kernel";
 char *d="masters";
 mystrcpy(d,p);
 printf("%s\n",p);
}

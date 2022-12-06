/*2) 
implement your own string comparison function that compares two strings and returns -ve / 0 / +ve number depending first string is smaller / equal or bigger to the second string.

try to call this function using two string constants as inputs, and see what is the output.

copy the string constants to a dynamically allocated string using above string copy function, and then call string comparison function again.*/
#include<stdio.h>
#include<stdlib.h>
void mystrcpy(char s1[],char s2[])
{
 int i;
 for(i=0;s2[i]!=0;i++)
 {
  s1[i]=s2[i];
 }
 s1[i]=0;
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
int main()
{
 int d;
 char *p1="moinuddin";
 char *p2="khaja";
 char *str1=(char *)malloc(50*sizeof(char));
 char *str2=(char *)malloc(50*sizeof(char));
 mystrcpy(str1,p1);
 mystrcpy(str2,p2);
 d=mystrcmp(str1,str2);
 if(d==0)
  printf("s1 & s2 are equal\n");
 else if(d>0)
  printf("s1 is bigger\n");
 else if(d<0)
  printf("s1 is smaller\n");
 return 0;
}

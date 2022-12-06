#include<stdio.h>
void trim(char s[])
{
int i=0,j;
for(i=0;s[i]==' ';i++);

for(i=0;s[i];i++)
{
  for(j=0;s[j] = s[i];i++,j++);
}

for(i=0;s[i];i++);

for(i;s[i]==' ';i--);
 s[i+1]='\0';
}

int main()
{
char s[100];
printf("enter a string\n");
scanf("%s",s);
trim(s);
printf("%s",s);

}

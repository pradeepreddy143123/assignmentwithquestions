#include<stdio.h>
char *strlower(char s[])
{
	int i=0,n;
	char *r=s;
	for(;*s;s++)
	{
		if(*s>='A'&&*s<='Z')
		{
			
			*s = *s+32;

                         
		}
       }
return s;

}

int main()
{
  
	char s[100]={"PRAdeep"};
	strlower(s);
        
        printf("%s",s);
        
         
} 

 



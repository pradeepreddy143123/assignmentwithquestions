/*10) Implement atof function ( string to float conversion)

function takes a numerical string as input and returns the equivalent float number as output.

eg., input : 3.145600

output: 3.145
*/

#include<stdio.h>
float atof(char s[])
{
	int i,r,j;
	float sum=0;
	int c,rem;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]=='.')
			c=i;
         else	
	{rem=s[i]-48;
        	sum=sum*10+rem;
printf("%f\n",sum);
	}
}
	for(j=0;j<(i-c-1);j++)
{
		sum=sum/10;
}
return sum;
//printf("%f",sum);

}


int main()
{
	char s[100];
	float a;
	printf("enter the input character\n");
	scanf("%s",s);
	a=atof(s);
	printf("%f",a);
}


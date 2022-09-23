#include<stdio.h>
int main()
{
	int a,b,c,marks;
	printf("enter the marks of the subjects");
	scanf("%d%d%d",&a,&b,&c);
        marks=a+b+c/3;
	if(a>=60&&b>=50&&c>=40)
        {
				if(marks>=200)
				{
					printf("eligible");
				}
				else if(marks>=150)
				{
					printf("eligible");
				}
				else
					printf("not eligible");
				return 0;
			}
else
{
printf("not eligible");
}

		}


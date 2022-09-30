#include<stdio.h>
int isleap(int y)
{
if(y%4==0&&!y%100==0||y%400==0)
{
return 1;
}
else
{
return 0;
        }
       
       
         
       
}

int date_valid_are_not(int d,int m,int y)
{
switch(m)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:if(d>=0&&d<=31)
                                {
                                  return 1;
                                 }
                                  return 0;
case 4:
case 6:
case 9:
case 11:if(d>=0&&d<=30)
                                {
                                 return 1;
                                 }
                                   return 0;
case 2: if(isleap(y))
                                 {
                                 if(d>=0&&d<=29)
                                 {
                                  return 1;
                                   }
                                 else if(d>=0&&d<=28)
                                {
                                 return 0;
                                }
                             }  
                               
                             
              }


               
         
}
int main()
{
int y,m,d,a;
{
printf("enter the date");
scanf("%d%d%d",&d,&m,&y);
a=date_valid_are_not(d,m,y);
if(a==1)
{
printf("date is valid");
}
else
{
printf("date is not valid");
}
}
}


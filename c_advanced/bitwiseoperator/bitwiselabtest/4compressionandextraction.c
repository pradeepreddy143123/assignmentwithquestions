#include <stdio.h>
void extractdate(short int );
void extractmonth(short int );
void extractyear(short int );
void date(int d,int m,int y)
{
    short int date,date1,i;
    y=y%100;

     date=(m<<12)|(d<<7)|y;
    date1=date;
    for(i=0;i<16;i++)
    {
        if(date1&(0x8000))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        date1=date1<<1;
    }
extractdate(date);
extractmonth(date);
extractyear(date);
    
}

void extractmonth(short int date)
{
    short int mon=0;
    mon=(date>>12)&(0x000f);
    printf("month=%hd\n",mon);
}

void extractdate(short int date)
{ short int day;
    day=(date>>7)&(0x001f);
    printf("day=%hd\n",day);
    
}

void extractyear(short int date)
{
    short int year=0;
    year=(date&0x007f);
    printf("year=%hd\n",year);
    
}

int main()
{
    int d,m,y;
    printf("enter the date\n");
    scanf("%d%d%d",&d,&m,&y);
    date(d,m,y);
    
}


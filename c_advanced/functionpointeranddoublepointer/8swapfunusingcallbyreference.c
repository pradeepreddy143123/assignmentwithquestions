//8) Repeat command line argument string sorting using swapping function using call by reference of pointers.
#include<stdio.h>
void sortingi(char *a[],int n);
void sortingr(char *a[],int n);
void sortingri(char *a[],int n);
void sorting(char *a[],int n);
void mystrcpy(char *s1,char *s2);
int mystrcmp(char *a,char *b);
int mystricmp(char *dtr1,char *dtr2);
int mystrcmp(char *str1,char *str2)
{
        int i;
        for(i=0;str1[i]!=0&&str2[i]!=0;i++)
        {
                if(str1[i]<str2[i])
                {
                        return 1;
                }
                else if(str1[i]>str2[i])
                {
                        return 2;
                }
        }

        if(str1[i]!=0||str2[i]!=0)
        {
                return 0;
        }
}
int mystricmp(char *dtr1,char *dtr2)
{
        int i,j;
        char str1[100];
        char str2[100];
        mystrcpy(str1,dtr1);
        mystrcpy(str2,dtr2);
        for(j=0;str1[j]!=0||str2[j]!=0;j++)
        {
                if(str1[j]>=65&&str1[j]<=90)
                {
                        str1[j]=str1[j]+32;
                }
                if(str2[j]>=65&&str2[j]<=90)
                {
                        str2[j]=str2[j]+32;
                }
        }
        for(i=0;str1[i]==str2[i];i++)
                if(str1[i]=='\0')
                        return 0;
        return(str1[i]-str2[i]);
}
void mystrcpy(char *s1,char *s2)
{
        int i;
        for(i=0;s2[i]!=0;i++)
        {
                s1[i]=s2[i];
        }
        s1[i]=0;
}

void swap(char **p1,char **p2)
{
        char *t;
        t=*p1;
        *p1=*p2;
        *p2=t;
}


int main(int argc,char *argv[])
{
        char str[100],str2[100];
        int c,i,j;
        void (*sorti)(char* [],int)=sortingi;   //ascending and case insensitive through function pointer calling.
        void (*sortr)(char* [],int)=sortingr;    //descending order and case sensitive through function pointer calling.
        void (*sortri)(char* [],int)=sortingri;  //descending and case insensitive through function pointer calling.
        void (*sort)(char* [],int)=sorting;      //ascending and case sensitive through function pointer calling.
        if(argv[1][0]=='-'&&argv[1][1]=='r'&&argv[2][0]=='-'&&argv[2][1]=='i')
        {
                sortri(argv,argc);
        }
        else if(argv[1][0]=='-'&&argv[1][1]=='r')
        {
                sortr(argv,argc);
        }
        else if(argv[1][0]=='-'&&argv[1][1]=='i')
        {
                sorti(argv,argc);
        }
        else
                sort(argv,argc);


}

void sortingi(char *a[],int n)
{
        char *s;
        int i,j,k;
        for(i=2;i<n-1;i++)
        {
                for(j=2;j<n-1;j++)
                {
                        k=mystricmp(a[j],a[j+1]);
                        if(k>0)
                        {
                        swap(&a[j],&a[j+1]);
                        }
                }
        }
        for(i=2;i<n;i++)
        {
                printf(" %s",a[i]);
        }
}


void sortingr(char *a[],int n)
{
        char *s;
        int i,j,k;
        for(i=2;i<n-1;i++)
        {
                for(j=2;j<n-1;j++)
                {
                        k=mystrcmp(a[j],a[j+1]);
                        if(k==1)
                        {

                        swap(&a[j],&a[j+1]);
                        }
                }
        }
        for(i=2;i<n;i++)
     {
                printf(" %s",a[i]);
        }
}
void sortingri(char *a[],int n)
{
        char *s;
        int i,j,k;
        for(i=3;i<n-1;i++)
        {
                for(j=3;j<n-1;j++)
                {
                        k=mystricmp(a[j],a[j+1]);
                        if(k<0)
                        {

                        swap(&a[j],&a[j+1]);

                        }
                }
        }
        for(i=3;i<n;i++)
        {
                printf(" %s",a[i]);
        }
}
void sorting(char *a[],int n)
{
        char *s;
        int i,j,k;
        for(i=1;i<n-1;i++)
        {
                for(j=1;j<n-1;j++)
                {
                        k=mystrcmp(a[j],a[j+1]);
                        if(k==2)
                        {
                        swap(&a[j],&a[j+1]);
                         }
                }
        }
        for(i=1;i<n;i++)
        {
                printf(" %s",a[i]);
        }
}
 

//10) Create a two dementional integer array to store the marks of n students in a class (Each student takes different number of subjects) so the number rows and columns are dynamic here. Read the marks of every student and calculate average marks, and print who is the topper (with highest average marks).




#include<stdio.h>
#include<stdlib.h>
/*int average(int marks [],int c)       //argument is subjectwisemarks array receiving as array.remove & in funcall.
{
        int avg,i;
        int sum=0;
        for(i=0;i<c;i++)
        {

                sum=sum+marks[i];
        }
        avg=sum/c;
        return avg;
}*/
int average(int **a,int c)      //using double pointer by sending adress of subjecmarks array.
{
        int avg,i;
        int sum=0;
        for(i=0;i<c;i++)
        {

                sum=sum+*(*a+i);
        }
        avg=sum/c;
        return avg;
}
int main()
{
        int r,topper,k,c,i,j,avg1;
        int **p=NULL;
        printf("enter no pof students\n");
        scanf("%d",&r);
        p=(int **)calloc(r,sizeof(int *));
        printf("enter no of subjects\n");
        scanf("%d",&c);
        for(i=0;i<c;i++)
        {
                p[i]=(int*)malloc(c*sizeof(int));

        }
        printf("enter subjects wise marks\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        scanf("%d",&p[i][j]);
                }
        }
        for(i=0;i<c;i++)
        {
                avg1=average(&p[i],c);
   
                printf("%d with avg of%d\n",i,avg1);
                if(i==0)
                        topper=avg1;
                if((i>0)&&(avg1>topper))
                {
                        topper=avg1;
                        k=i;
                }

        }

                printf("%d is the topper with avg of%d",k,topper);
}

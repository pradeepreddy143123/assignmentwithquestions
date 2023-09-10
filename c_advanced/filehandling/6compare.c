/*Write a program that compares two files and returns 0 if they are equal and 1 if they are not equal.*/


#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp1   ;
    FILE *fp2   ;

    int cnt1 = 0;
    int cnt2 = 0;
    int count  = 0;


    fp1 = fopen("new.txt","r");
    if( fp1 == NULL )
    {
        printf("\n File can not be opened : \n");
        return -1;
    }

    // move file pointer to end and get total number of bytes
    fseek(fp1,0,SEEK_END);
    cnt1 = ftell(fp1);

    fp2 = fopen("rep.txt","r");
    if( fp2 == NULL )
    {
        printf("\n File can not be opened : \n");
        return -1;
    }

    // move file pointer to end and get total number of bytes
    fseek(fp2,0,SEEK_END);
    cnt2 = ftell(fp2);

    fseek(fp1,0,SEEK_SET);
    fseek(fp2,0,SEEK_SET);

    // check for the total number of bytes
    if( cnt1 != cnt2 ){
        printf("\nFile contents are not same\n");
    }
    else
    {
        while( ! feof(fp1) )
        {
                if( fgetc(fp1) != fgetc(fp2) )
                {
                    count = 1;
                    break;
                }
        }

        if( count )   printf("\nFile contents are not same.\n");
        else        printf("\nFile contents are same.\n");
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}

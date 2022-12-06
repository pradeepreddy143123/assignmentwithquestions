//1) return a structure with area and perimeter of a circle from a function that takes radius as input. Print area and perimeter in main function.
#include<stdio.h>
struct circle
{
float A;
float P;
};
struct circle fun(int); //sending radius as argument to function.
int main()
{
int r;
struct circle C;
scanf("%d",&r);
C=fun(r); // structure variable is global so assigning a structure variable to function call is not required.
printf("area of circle : %f",C.A);
printf("Perimetrer of circle %f",C.P);
return 0;
}
struct circle fun(int r)
{ struct circle V;
V.A=22*r*r/7;
V.P=2*22*r/7;
return V;
} //here im declared stucture varaible in global along with structure defnition so no need to return again.it will acces from global.if we intialise it in main then we ghave to initialise it again in function.

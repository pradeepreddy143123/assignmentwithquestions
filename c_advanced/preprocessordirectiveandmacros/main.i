# 1 "15main.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "15main.c"
# 1 "15header.h" 1
       

void available_stock();
void sell();
void purchase();
void addstock(int item);
int deletestock(int item);
# 2 "15main.c" 2




int stock=500;
int main()
{
int i=1,n;
while(i==1)
{
printf("\n(1) available_stock\n(2) sell\n(3) purchase\n(4) quit\n\n");
printf("enter the choices:");
scanf("%d",&n);
switch (n)
{
case 1:available_stock();
        break;
case 2:sell();
       break;
case 3:purchase();
        break;
case 4:i=0;
       break;
}
}
}

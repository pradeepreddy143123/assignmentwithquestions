#include<stdio.h>
#define i 1
int main()
{
#if i == 1
printf("microsoft windows welcomes you");
#elif i == 2
printf("linux welcomes you");
#elif i == 3
printf("Mac welcomes you");
#else
printf("no version");
#endif
}

#include<stdio.h>
int main()
{
     int year,n;
     printf("which year were u born?\n");
     scanf("%d", &year);
     
     if (year%4==0) {
         printf("it's a leap year");
     }
     else {
         printf("it's not a leap year");
     }
     
     return 0;
}

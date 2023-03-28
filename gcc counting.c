#include<stdio.h>
int main()
{
    int num, sum= 0;
    printf("enter a number\n");
    scanf("%d", &num);
    while(num != 0) 
    {
        sum++;
        num/=10;
    }
    printf("Number of digits; %d", sum);
    printf("\n 192211344");
    return 0;
}

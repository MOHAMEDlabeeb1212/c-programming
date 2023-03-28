#include<stdio.h>
int main()
{
    char c;
    printf("enter something to check if it's uppercase or not\n");
    scanf("%c", &c);
    if (c>='a' && c<='z') {
        printf("alphabet is Lower Case");
    
    }
    else if (c>='A' && c<='Z') {
        printf("alphabet is Upper Case");
    }
    else  {
        printf("its not alphabet raa");
    }
    printf("\n192211344");
    
    return 0;
    
}

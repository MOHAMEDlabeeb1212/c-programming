#include <stdio.h>

int main() {
    int num, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i = num; i > 0; i /= 10) {
        digit = i % 10;
        sum += digit;
    }
    printf("Sum of digits: %d", sum);
    
    printf("\n192211344");
    return 0;
}

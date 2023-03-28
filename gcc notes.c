#include <stdio.h>

int main() {
    int amount, notes;
    
    printf ("enter amount:\n");
    scanf ("%d",&amount);
    
    printf ("the minimum number of notes required is\n");
    
    notes = amount/500;
    amount = amount%500;
    printf ("Rs 500: %d \n", notes);
    
    notes = amount/100;
    amount = amount%100;
    printf ("Rs 100: %d \n", notes);
    
    notes = amount/50;
    amount = amount%50;
    printf ("Rs 50: %d \n", notes);
    
    notes = amount/10;
    amount = amount%10;
    printf ("Rs 10: %d \n", notes);
    
    notes = amount/1;
    amount = amount%1;
    printf ("Rs 1: %d \n", notes);
    
    printf("\n 192211344");
    
    return 0 ;
}

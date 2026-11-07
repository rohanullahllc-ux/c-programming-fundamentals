#include <stdio.h>

int main(){
    int a;                          // Declare a variable named 'a' that can only hold a whole number (int = integer)
    a = 12;                         // Assign the value 12 into the box named 'a'
    printf("Value of A is %d", a);  // %d is a placeholder for an int; printf swaps it out for a's actual value (12)
    return 0;
}
#include <stdio.h>

int main(){
    int a;
    float b;

    // FIXED: scanf's text is NOT a prompt - it's a pattern the typed input must match exactly.
    // Prompts belong in printf(), written BEFORE the scanf() call that reads the value.
    printf("Enter a Integer Value:- ");
    scanf("%d", &a);     // & gives scanf the variable's memory address, so it knows WHERE to store the number

    printf("Enter a Decimal Value:- ");
    scanf("%f", &b);

    printf("The Integer Value is: %d\n",a);
    printf("The Float Value is: %.2f\n",b);  // %.2f shows only 2 decimal places instead of the default 6
    return 0;
}
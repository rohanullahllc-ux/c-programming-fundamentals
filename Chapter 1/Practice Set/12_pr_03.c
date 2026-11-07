#include <stdio.h>

/*
This Program Converts a Celsius temperature to Fahrenheit, using user input.

Formula: F = C x (9/5) + 32
Here: C = temperature in Celsius, entered by the user
      Div = the 9/5 part of the formula, calculated separately for clarity
Check: 0C should give 32F, 100C should give 212F, 1C should give 33.8F
*/

/*
===== MY PREVIOUS (BUGGY) VERSION - kept for reference =====
This is what I originally wrote before fixing it. The bug:

    int Div = 9/5;
    int F = C * Div + 32;

9 and 5 are both plain whole numbers (int), so C performs INTEGER DIVISION -
it computes 1.8 but then truncates (chops off) the decimal part, leaving
just 1 instead of 1.8. So Div silently became 1, not 1.8, and the formula
effectively became F = C + 32 instead of F = C x 1.8 + 32.
This only "worked" for C = 0 (0 times anything is still 0) - for C = 100
it gave 132 instead of the correct 212, a huge, consistent error.
==============================================================
*/

int main(){
    int C;                                    // Celsius value, read from the user
    printf("Write The Temperature in Celsius:\n");
    scanf("%d",&C);

    float Div = 9.0/5.0;   // FIXED: writing 9.0 and 5.0 as floats forces real decimal division -> 1.8, not truncated to 1
    float F = C * Div + 32;   // float, so the decimal result survives instead of being chopped off

    printf("The Temperature in Fahrenheit is %.2f\n",F);   // %f for float, .2 for 2 decimal places
    return 0;
}
#include <stdio.h>

/*
This Program Calculates the Area of a Circle given its radius.

Formula: Area = pi x r^2   (pi times radius squared)
Here: pi = 3.14 (C has no built-in pi constant, so we declare it ourselves)
      r  = radius of the circle
*/

/*
===== MY PREVIOUS (BUGGY) VERSION - kept for reference =====
This is what I originally wrote before fixing it. Two bugs here:
1. rSq was hardcoded to 20 instead of being calculated as r * r.
2. Area was declared as int, so the decimal part of the result got
   truncated/chopped off instead of showing the real precise answer.

int main(){
    float pi = 3.14;
    int r = 15;
    int rSq = 20;

    int Area = pi * r * rSq;

    printf("Area of Circle Calculated is %d\n",Area);
    return 0;
}
==============================================================
*/

int main(){
    float pi = 3.14;       // pi is a decimal value, so it must be a float
    int r = 15;             // radius, taken as a whole number here
    int rSq = r * r;         // r squared - calculated from r, never hardcoded separately

    float Area = pi * rSq;   // float, not int - keeps the decimal result instead of truncating it

    printf("Area of Circle Calculated is %.2f\n",Area);   // %f for float, .2 rounds to 2 decimal places
    return 0;
}
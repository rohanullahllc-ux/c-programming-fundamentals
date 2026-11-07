#include <stdio.h>

/*
This Program Calculates the Volume of a Cylinder given its radius and height.
It builds on the circle area program - a cylinder's volume is just the
circle's area multiplied by the height.

Formula: Volume = pi x r^2 x height
Here: pi     = 3.14 (C has no built-in pi constant, so we declare it ourselves)
      r      = radius of the circular base
      height = height of the cylinder
*/

int main(){
    float pi = 3.14;        // pi is a decimal value, so it must be a float
    float height = 17.5;     // height can have decimals too
    int r = 12;               // radius, taken as a whole number here
    int rSq = r*r;              // r squared - calculated from r, never hardcoded separately

    float volume = pi * rSq * height;   // float, so the decimal result isn't truncated

    printf("The Volume of Cylinder is %.2f\n",volume);
    return 0;

}
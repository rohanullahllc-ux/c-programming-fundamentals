
/*
This Program Calculates Area of Rectangle By using L x W
Formula by user supplied inputs/values.
*/

#include <stdio.h> // Preprocessor Directories

int main(){ //Basic main() function

    //Variable Declarations
    int length;
    int width;

    //Prompting/Taking values/Inputs from the user
    printf("Enter Length Value:-\n");
    scanf("%d",&length);
    printf("Enter Width Value:-\n");
    scanf("%d",&width);

    //Calculating Area
    int area = length * width;

    //Displaying the Desire Output Area of triangle.
    printf("The Area of Rectangle is %d",area);
    return 0;
}
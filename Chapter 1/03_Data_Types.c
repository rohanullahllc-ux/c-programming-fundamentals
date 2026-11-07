#include <stdio.h>

int main(){
    int a;                   // int = whole numbers only (no decimal point)
    a = 10;
    //int a = 10;             // same thing written in one line instead of two
    float b;                 // float = numbers that can have a decimal point
    b = 12.5;
    //float b = 12.5;          // one-line version of the two lines above
    //char c;
    //c = 'r';
    char c = 'r';             // char = a single character, always written inside single quotes ' '

    printf("The Value of A is:- %d\n",a);   // %d = placeholder for int
    printf("The Value of B is:- %f\n",b);   // %f = placeholder for float (shows 6 decimals by default)
    printf("The Value of C is:- %c\n",c);   // %c = placeholder for a single char
}

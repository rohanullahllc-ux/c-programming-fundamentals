#include <stdio.h>

/*
EXTRA PRACTICE 1a: Swap Two Numbers (WITH a temporary/third variable)

Task:
- Take two integers from the user (e.g. a and b) using scanf.
- Print their values BEFORE swapping.
- Swap their values using a third variable (e.g. temp) to hold one of
  them while the swap happens.
- Print their values AFTER swapping.

This is the "easy" version - get this working first, then try part (b),
which does the same thing WITHOUT the extra variable.

Concepts tested: variables, scanf, assignment, printf
*/

int main(){
  int a;
  int b;

  printf("Enter First Integer:- ");
  scanf("%d",&a);
  printf("Enter Second Integer:- ");
  scanf("%d",&b);
  printf("Here are your Entered Integers Before Swapping: %d\\%d",a,b);

  //Swapping
  int Swap;
  Swap = a;
  a = b;
  b = Swap;
  printf("\n");
  printf("Your Swapped Integers Are, %d\\%d",a,b);

  return 0;
}
#include <stdio.h>

/*
EXTRA PRACTICE 1b: Rotate Three Numbers (a -> b -> c -> a)

(Replaces the original "swap without a temp variable" version - that one
needed a clever arithmetic trick that's a step ahead of what's been
covered so far. This version uses the EXACT same technique as 1a - a
temp variable - just applied to three numbers instead of two.)

Task:
- Take three integers from the user (e.g. a, b, c) using scanf.
- Print their values BEFORE rotating.
- Rotate them so that: a's new value = old c, b's new value = old a,
  c's new value = old b. (Picture it as each value moving one seat to
  the right, and the last one wrapping back around to the first seat.)
- Print their values AFTER rotating.
- Use only ONE temp variable - same rule as 1a, just more values moving
  through it.

Hint: this is the same "rescue the value before it gets overwritten"
idea as 1a, just with three boxes instead of two. Work out the order of
assignments on paper first - with three variables, getting the order
wrong loses a value permanently, same as it would have in 1a.

Concepts tested: variables, scanf, assignment order, printf
*/

int main(){
  int a,b,c;
  printf("Enter Value of A:\n");
  scanf("%d",&a);
  printf("Enter Value of B:\n");
  scanf("%d",&b);
  printf("Enter Value of C:\n");
  scanf("%d",&c);

  printf("Value of A %d\n",a);
  printf("Value of B %d\n",b);
  printf("Value of C %d\n",c);

  int Swap;
  a = Swap;


  return 0;
}

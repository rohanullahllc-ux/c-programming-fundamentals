#include <stdio.h>

/*
This Program Calculates Simple Interest, using values supplied by the user.

Formula: Simple Interest = (Principal x Years x Rate) / 100
Here: Principal = starting amount
      Years     = number of years
      Rate      = rate of interest (as a plain number, e.g. 3 means 3%)
Check: Principal=777, Years=2, Rate=3  should give 46.62
       Principal=1000, Years=2, Rate=5 should give 100.00
*/

/*
===== MY PREVIOUS (BUGGY) VERSION - kept for reference =====
This is what I originally wrote before fixing it. The bug:

    int Formula = Principal * Years * Rate;
    int Div = Formula/100;

Formula and 100 were both int, so Formula/100 was INTEGER DIVISION -
it truncated the decimal part instead of keeping it. With
Principal=777, Years=2, Rate=3 this gave 46 instead of the correct 46.62.
It only looked "right" with numbers that happened to divide evenly by 100
(like 1000 x 2 x 5 = 10000, /100 = 100 exactly) - that's what made the bug
easy to miss at first.
==============================================================
*/

/*
===== WHY MULTIPLE FIXES ALL WORK - tested and confirmed =====
The rule: integer division only happens when BOTH sides of / are int.
If EITHER side is a float, the whole division becomes real decimal math.

  int Formula,   /100      -> 46.00  (WRONG - both sides int)
  int Formula,   /100.0    -> 46.62  (correct - divisor is float)
  float Formula, /100      -> 46.62  (correct - Formula is float)
  float Formula, /100.0    -> 46.62  (correct - both float)

Only the first combination breaks. The other three commented lines below
show the alternative fixes that were tested and also work correctly.
==============================================================
*/

int main(){
    int Principal;                          // starting amount, read from the user
    int Years;                              // number of years
    int Rate;                               // rate of interest

    printf("Enter The Value of Principle:-\n");
    scanf("%d",&Principal);
    printf("Enter Number of Years:-\n");
    scanf("%d",&Years);
    printf("Enter Principle Rate:-\n");
    scanf("%d",&Rate);

    //int Formula = Principal * Years * Rate;     // ALTERNATIVE: also fine on its own - multiplying ints never loses precision
    float Formula = Principal * Years * Rate;      // multiplication result, stored as float
    //float Percentage = Formula/100;                // works because Formula is already float - 100 gets promoted automatically
    float Percentage = Formula/100.0;            // ALTERNATIVE: explicitly making the divisor float also works
    //int Percentage = Formula/100.0;              // STILL BROKEN: division itself is correct (46.62), but storing
                                                     // the result into an int truncates it right back down to 46.
                                                     // Tested: this prints 46, not 46.62 - the fix has to survive
                                                     // all the way through to the variable that actually holds it.

    printf("The Simple Interest is %.2f",Percentage);   // %f for float, .2 for 2 decimal places
    //printf("The Simple Interest is %d",Percentage);  // STILL BROKEN: %d expects an int, but Percentage is a
                                                         // float - mismatched types. Tested: this prints garbage
                                                         // (536870912), and GCC's -Wall even warns about it directly.
    return 0;
}
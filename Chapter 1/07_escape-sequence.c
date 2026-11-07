#include <stdio.h>

/*
Most used escape sequences in C (backslash + a character = ONE special character):

\n   New line            - moves output to the next line
\t   Tab                 - adds horizontal spacing
\\   Literal backslash   - prints a single \
\'   Literal single quote - needed inside '...' char literals, optional inside "..."
\"   Literal double quote - needed inside "..." string literals, optional inside '...'
\0   Null character      - marks the end of a string (meet this properly with arrays/strings)
\r   Carriage return     - moves cursor to start of current line (rarely used directly)
*/

int main(){
    char n = 'r';                      // a single character stored in n
    //char a = '9'; // I wrote number as a charcter but since age can be higher so I used int instead.
    int a = 29;                        // age needs int, not char, since it can be more than one digit

    printf("My Name starts with %c\n","\'",n,"\'"); // This line was not giving me the desire output
    // ^ Bug: only ONE %c placeholder but FOUR extra values passed - printf only used the first one,
    //   and "\'" is a STRING (wrong type for %c, which needs a plain char), so the output was wrong.

    printf("My Name starts with \'%c\'\n",n); // I got my desire output adding semicolin to character 'r'
    // ^ Fixed: exactly one %c matched to one char (n). \' here is an ESCAPED single quote -
    //   not required inside "..." (the delimiter here is "), but still valid to write.

    printf("My age is %d",a);          // %d placeholder matched to int a
    return 0;
}
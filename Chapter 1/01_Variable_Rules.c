#include <stdio.h>

int main(){
    int rohaan;         // Valid: only letters used
    int num_1;          // Valid: letters + underscore + a digit (digit is NOT the first character)
    int mr_khan;        // Valid: letters and an underscore only
    int _12gamer;       // Valid: starts with an underscore, not a digit, so it's allowed
    //int student-11;    // Invalid: '-' is a math operator, not allowed inside a name
    //int 123_game;       // Invalid: a variable name can never START with a digit
    //int rohaan khan;    // Invalid: spaces split this into two words, not one valid name
    //int rohaa@khan;      // Invalid: special symbols like '@' are never allowed in names
    return 0;
}
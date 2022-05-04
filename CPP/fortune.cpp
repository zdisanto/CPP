// CODECADEMY C++ REVIEW 5
/* 
    Optional: Because your friend didn’t debug along the way, they ended up with a super buggy program. 
    Can you be a bug detective and help them debug their program?
        The final program should print a fortune message like:
            🥠 Flattery will go far tonight.
    Final tip: If you encounter a long error message, always scroll to the top 
    and try to debug the very first bug.
*/
/*  //THE BEFORE CODE:
#include <iostream>
#include <stdlib.h>
#include <ctime>
int Main() {
    srand (time(NULL));
    int	fortune = rand() % 10;
    if (fortune = 0) {
        std::cout << "Flattery will go far tonight.\n";
    } else if (fortune == 1) {
        std::cout << "Don't behave with cold manners.\n"
    } else if (fortune == 2) {
        std::cout << "May you someday be carbon neutral\n";
    } else if (fortune == 3) {
        std::cout << "You have rice in your teeth.\n";
    } else if (fortune == 4) {
        std::cout << "A conclusion is simply the place where you got tired of thinking.\n";
    } else if (fortune ==) {
        std::cout << "No snowflake feels responsible in an avalanche.\n";
    } else if (fortune == 6) {
        std::cout << "He who laughs last is laughing at you.\n";
    } else if (fortune == 7) {
        std::cout << "If you look back, you'll soon be going that way.\n";
    } else if (fortune == 8) {
        std::cout << "You will die alone and poorly dressed.\n";
    } else if (fortune == 9 {
        std::cout << "The fortune you seek is in another cookie.\n";   
    } 
}
*/

// THE AFTER CODE:
#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
    
    srand (time(NULL));
    int	fortune = rand() % 10;
  
    if (fortune == 0) {
        std::cout << "Flattery will go far tonight.\n";
    } else if (fortune == 1) {
        std::cout << "Don't behave with cold manners.\n";
    } else if (fortune == 2) {
        std::cout << "May you someday be carbon neutral\n";
    } else if (fortune == 3) {
        std::cout << "You have rice in your teeth.\n";
    } else if (fortune == 4) {
        std::cout << "A conclusion is simply the place where you got tired of thinking.\n";
    } else if (fortune == 5) {
        std::cout << "No snowflake feels responsible in an avalanche.\n";
    } else if (fortune == 6) {
        std::cout << "He who laughs last is laughing at you.\n";
    } else if (fortune == 7) {
        std::cout << "If you look back, you'll soon be going that way.\n";
    } else if (fortune == 8) {
        std::cout << "You will die alone and poorly dressed.\n";
    } else if (fortune == 9) {
        std::cout << "The fortune you seek is in another cookie.\n"; 
    } 
}
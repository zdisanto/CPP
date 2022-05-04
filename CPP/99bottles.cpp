// CODECADEMY C++ REVIEW 4 [Kind of, there was no task for REVIEW 4 so I used the practice excersise]
/* 
    Write a 99bottles.cpp program that prints the verses of the “99 Bottles” song. 
    Each stanza goes something like this:
        i bottles of pop on the wall.
        Take one down and pass it around.
        i-1 bottles of pop on the wall.
    Hint: Use a decrementing for loop!

    Key concepts covered in this lesson:
    - Loops perform repetitive actions so we don’t have to code those actions manually every time.
    - How to write while loops with a continue condition.
    - How to write for loops with a counter that increments or decrements.
*/

#include <iostream>

int main() {
    // Write a for loop here:
    for (int i = 99; i >= 1; i--) {
        std::cout << i << " bottles of pop on the wall.\n" << i << " bottles of pop.\nYou take one down and pass it around.\n" << i - 1 << " bottles of pop on the wall.\n\n";
    } 
}
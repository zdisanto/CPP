// CODECADEMY >> C++ >> Chapter 2 >> Lesson 1 >> Variables >> ARITHMETIC OPERATIONS
/* 
    In math.cpp, we have already declared and initialized a variable called score for you.
    Let’s change its value by giving it the value of 1234 multiplied by 99.
    But how would we know what that value is?
    You can output the value by simply adding this code underneath:
        std::cout << score << "\n";
    Notice how when we want to output a variable, we don’t add double quotes around its name.
    Compile and execute your program using the terminal.
*/
#include <iostream>

int main() {

    int score = 0;

    // Change score here:
    score = 1234 * 99;
  
    std::cout << score << "\n";

}
// CODECADEMY >> C++ >> Chapter 2 >> Lesson 1 >> Variables >> USER INPUT
/*
    Add the following code:
        std::cin >> tip;
    So that the user of the program can enter something 
    with their keyboard and what they enter gets saved in the int variable named tip.
    Let’s output the following using chaining:
        You paid [tip] dollars.
    where the [tip] should be the value of the variable tip.
    Make sure to add a new line to the end of the output.
    Compile and execute your program using the terminal.
    Your terminal then should look something like:
        $ g++ tip.cpp
        $ ./a.out
        Enter a tip amount: 
    Type a number in the terminal and press enter.
*/
#include <iostream>

int main() {
  
    int tip = 0;
  
    std::cout << "Enter tip amount: ";
    std::cin >> tip;

    std::cout << "You paid " << tip << " dollars.\n";
  
}
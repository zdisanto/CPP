// CODECADEMY >> C++ >> Chapter 4 >> Lesson 2 >> Errors >> LOGIC ERRORS
/*
    Some common logic errors:
        Program logic is flawed
        Some “silly” mistake in an if statement or a for/while loop
    Note: Logic errors don’t have error messages. 
    Sometimes, programmers use a process called test-driven development (TDD), 
    a way to give logic errors error messages and save yourself a lot of headaches!
    Compile and execute steps.cpp. There should be no error messages.
    But the program is supposed to output steps from #1 - #10. The program is somehow starting from 0…
    Find the logic error.
*/
#include <iostream>

int main() {
  
    // Output from 1 to steps:
  
    int steps = 10;
  
    // Error was i = 0 instead of i = 1
    for (int i = 1; i <= steps; i++) {
    
        std::cout << "Step #";
        std::cout << i << "\n";
    
    }
  
}
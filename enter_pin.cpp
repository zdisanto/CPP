// CODECADEMY >> C++ >> Chapter 4 >> Lesson 1 >> Loops >> WHILE LOOP DEMO
/*
    Compile and execute using the terminal.
    When the program asks you to Enter your PIN:, try the following:
        Press 1111 and press enter.
        Press 2019 and press enter.
        Press 1234 and press enter.
*/
#include <iostream>

int main() {
  
    int pin = 0;
    int tries = 0;
  
    std::cout << "BANK OF CODECADEMY\n";
  
    std::cout << "Enter your PIN: ";
    std::cin >> pin;

    tries++;

    while (pin != 1234 && tries < 3) {
    
        std::cout << "Enter your PIN: ";
        std::cin >> pin;
        tries++;
    
    }
  
    if (pin == 1234) {
    
        std::cout << "PIN accepted!\n";
        std::cout << "You now have access.\n"; 
    
    }
  
}
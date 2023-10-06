// CODECADEMY >> C++ >> Chapter 6 >> Functions >> Review of C++ Functions
/*
    Try using functions to rewrite (or refactor) that IT conversation program we showed you.
    You can also use this space to play around with building your own functions. Have fun!
*/
#include <iostream>

std::string it_support(int attempts) {
    // Conduct IT support
    std::string on_off_attempt;
    std::string prompt = "Hello. IT.\nHave you tried turning it off and on again? y/n\n";
  
  int i = 0;

    while (attempts > i) {
        std::cout << prompt;
        std::cin >> on_off_attempt;
        i++;
        attempts--;
        if (i == 1) {
            // Check in with Jenn
            std::cout << "Oh hi Jen!\n";
            std::cout << "====\n5 minutes later...\n====\n";
        } else if (i == 2) {
            // Check in with Roy
            std::cout << "You stole the stress machine? But that's stealing!\n";
            std::cout << "====\n10 minutes later...\n====\n";
        } else {
            // Conduct IT support again...
            std::cout << prompt;
            std::cin >> on_off_attempt;
            std::cout << "...CLICK...\n";
        }
    }
    // Conduct IT support yet again...zzzz...
    return prompt;
}

int main() {
    it_support(5);
}
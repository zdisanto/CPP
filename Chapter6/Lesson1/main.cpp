// CODECADEMY >> C++ >> Chapter 6 >> Lesson 1 >> Functions >> The Function of Functions 
/*
    There are some great reasons to use functions in your code:
        A single line can make all that code fire off instead of a whole bunch of lines.
        You can build DRY (Don’t Repeat Yourself) code, 
            reusing the code you already wrote.
        Functions help make your code flexible and modular, 
            meaning you can group your code more easily by task.
    Take a look at the IT support conversations in main.cpp. 
    There’s a lot of repeating code.
    Compile and execute the code. It works, 
    but we could make this code much shorter and cleaner with the help of a function…
*/
/*
    BEFORE CODE:
#include <iostream>

int main() {
  
  // Conduct IT support
  std::string on_off_attempt;
  std::cout << "Hello. IT.\n";
  std::cout << "Have you tried turning it off and on again? y/n\n";
  std::cin >> on_off_attempt;
  
  // Check in with Jenn
  std::cout << "Oh hi Jen!\n";
  
  // Conduct IT support again...
  std::cout << "Hello. IT.\n";
  std::cout << "Have you tried turning it off and on again? y/n\n";
  std::cin >> on_off_attempt;

  // Check in with Roy
  std::cout << "You stole the stress machine? But that's stealing!\n";
  
  // Conduct IT support yet again...zzzz...
  std::cout << "Hello. IT.\n";
  std::cout << "Have you tried turning it off and on again? y/n\n";
  std::cin >> on_off_attempt;
  
}
*/

// AFTER CODE:

// In all honesty, I have no clue what to do here
#include <iostream>
void itSupport() { // <-- This is a function
  std::string on_off_attempt;
  std::cout << "Hello. IT.\n";
  std::cout << "Have you tried turning it off and on again? y/n\n";
  std::cin >> on_off_attempt;
}

int main() { // <-- This is ALSO a function

  // Conduct IT support
  itSupport();

  // Check in with Jenn
  std::cout << "Oh hi Jen!\n";
  
  // Conduct IT support again...
  itSupport();

  // Check in with Roy
  std::cout << "You stole the stress machine? But that's stealing!\n";
  
  // Conduct IT support yet again...zzzz...
  itSupport();
  
}
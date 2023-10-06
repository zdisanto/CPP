// CODECADEMY >> C++ >> Chapter 6 >> Functions >> Return Types — Beyond the Void
/*
    1. Convert needs_it_support() from a void function into a bool type function.
    
    2. We’re currently printing support at the end of the function body.
    Remove that print statement. Instead, return support from the function.
    Inside of main(), print the result of needs_it_support() to the terminal.
*/
#include <iostream>

// Change needs_it_support so that it returns support:
bool needs_it_support() {
    bool support;
    
    std::cout << "Hello. IT. Have you tried turning it off and on again? Enter 1 for yes, 0 for no.\n";
    std::cin >> support;
    return support;
}

int main() {
    // Change the following line to print the function result:
    std::cout << needs_it_support();
}
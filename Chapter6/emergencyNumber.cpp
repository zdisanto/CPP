// CODECADEMY >> C++ >> Chapter 6 >> Functions >> Parameters & Arguments
/*
    You work with emergency services in Britain and the emergency number just changed:
    https://youtu.be/HWc3WY3fuZU
    Yikes! That’s a big change. What if the number changes again?
    Let’s build a function that prints out the current emergency number, whatever it is from now on.
    1. Above main(), define a void function get_emergency_number() that accepts one parameter:
        - a string with the name emergency_number
    2. In get_emergency_number(), print out “Dial “ with the emergency_number that was passed into the function.
    3. Call get_emergency_number() in main() to see the number get printed!
*/

#include <iostream>

// Define get_emergency_number() below:
void get_emergency_number(std::string emergency_number) {
    std::cout << "Dial " << emergency_number << "\n";
}

int main() {
    // Original emergency services number 
    std::string old_emergency_number = "999";
    
    // For nicer ambulances, faster response times
    // and better-looking drivers
    std::string new_emergency_number = "0118 999 881 999 119 725 3";
    
    // Call get_emergency_number() below with
    // the number you want!
    get_emergency_number(new_emergency_number);
}
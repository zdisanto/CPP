// CODECADEMY >> C++ >> Chapter 6 >> Functions >> Tackling Multiple Arguments
/*
    1. Define a void function name_x_times() that takes two parameters:
        - a string name
        - an integer x
    2. Inside the function body of name_x_times(), create a while loop that will run as long as x is greater than 0.
    3. Inside the while loop, print name to the terminal.
    Below the print statement, decrement (or decrease) x by 1 so that x is a smaller number on the next loop.
    4. Now, call name_x_times() in main() with my_name and some_number as arguments.
    (Don’t forget to change my_name to your name!)
*/

#include <iostream>

// Define name_x_times() below:
void name_x_times(std::string name, int x) {
    while (x > 0) {
        std::cout << name << "\n";
        x--;
    }
}

int main() {
    std::string my_name = "Zo!";
    int some_number = 5; // Change this if you like!
    // Call name_x_times() below with my_name and some_number
    name_x_times(my_name, some_number);
}
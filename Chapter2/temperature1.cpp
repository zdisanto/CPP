// CODECADEMY >> C++ >> Chapter 2 >> Lesson 1 >> Variables >> Challenge: TEMPERATURE 1
/*
    First, google the current temperature of New York in Fahrenheit.
    Declare a double variable named tempf and initialize it with the temperature.
    Declare another double variable named tempc.
    Calculate the temperature to Celsius.
    Store it in tempc.
    Display the result.
    Output exactly this:
        The temp is [tempc] degrees Celsius.
    Don’t forget to add a \n.
    Compile and execute the program using the terminal.
*/
#include <iostream>

int main() {
    // F to C equation: C = (F−32)/1.8
    double tempf = 48;
    double tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}
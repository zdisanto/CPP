// CODECADEMY >> C++ >> Chapter 2 >> Lesson 1 >> Variables >> Challenge: TEMPERATURE 2
/*
    Tell the user “Enter the temperature in Fahrenheit: “ using std::cout.
    And get their input using std::cin and store it in tempf.
    Compile and execute your program using the terminal.
*/
#include <iostream>

int main() {
  
    double tempf;
    double tempc;
  
    // Ask the user
    std::cout << "Enter the temperature in Fahrenheit:\n";
    std::cin >> tempf;
  
    tempc = (tempf - 32) / 1.8;
  
    std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}
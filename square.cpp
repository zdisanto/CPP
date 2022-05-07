// CODECADEMY >> C++ >> Chapter 4 >> Lesson 1 >> Loops >> WHILE LOOP
/*
    In square.cpp, write this using a while loop in C++.
    If you notice the Run button spinning continuously or 
    a “Lost connection to Codecademy” message in this exercise, 
    you may have an infinite loop! If the stop condition for our loop is never met, 
    we will create an infinite loop which stops our program from running anything else. 
    To exit out of an infinite loop in an exercise, refresh the page — 
    then fix the code for your loop.
*/
#include <iostream>

int main() {
  
    int i = 0;
    int square = 0;
  
    // Write a while loop here:
    while (i < 10) {
        square = i * i;
        std::cout << i << " " << square << "\n";
        i++;
  }   
}
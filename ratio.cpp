// CODECADEMY >> C++ >> Chapter 4 >> Lesson 2 >> Errors >> RUN-TIME ERRORS
/*
    Some common run-time errors:
        Division by zero also known as division error. 
            These types of error are hard to find as the compiler 
            doesn’t point to the line at which the error occurs.
        Trying to open a file that doesn’t exist
    There is no way for the compiler to know about these kinds of errors when the program is compiled.
    There’s a run-time error in ratio.cpp.
    This program is supposed to find the ratio of a table’s dimensions, 
    which is supposed to be 20 x 30.
*/
#include <iostream>

int main() {
  
    int width = 20;

    // length was = to 0 (should be 30)
    int length = 30;

    int ratio = width / length;
  
    std::cout << ratio << "\n";
  
}
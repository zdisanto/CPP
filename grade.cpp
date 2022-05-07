// CODECADEMY >> C++ >> Chapter 3 >> Lesson 1 >> Conditionals & Logic >> IF STATEMENT, RELATIONAL OPERATORS & ELSE CLAUSE
/*
    Inside grade.cpp, write an if statement where if grade > 60 is true, output “Pass”.
    Add an else statement that outputs “Fail”.
*/
#include <iostream>

int main() {
    // Change this to see a different output
    int grade = 59;

    if (grade > 60) {
        std::cout << "Pass\n";

    } else {
        std::cout << "Fail\n";
    }
  
}
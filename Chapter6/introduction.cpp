// CODECADEMY >> C++ >> Chapter 6 >> Functions >> Code Challenge >> Introduction
/*
  1. Above main(), define a void function oscar_wilde_quote() that prints “The highest, as the lowest, form of criticism is a mode of autobiography.” to the output terminal.
  2. Inside of main(), call oscar_wilde_quote().
*/
#include <iostream>

// Define introduction() here:
void introduction(std::string first_name, std::string last_name) {
  std::cout << last_name << ", " << first_name << " " << last_name;
}

int main() {
  introduction("Beyonce", "Knowles");
}
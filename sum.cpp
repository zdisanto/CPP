// CODECADEMY >> C++ >> Chapter 4 >> Lesson 2 >> Errors >> LINK-TIME ERRORS
/*
    Some common link-time errors:
        Using a function that was never defined (more on this later)
        Writing Main() instead of main()
    Try compiling to find the link-time error in sum.cpp.
*/

#include <iostream>

// The error was Main() instead of main() 
int main() {
  
  int num = 0;
  int sum = 0;
  
  std::cout << "Enter a number: ";
  std::cin >> num;
  
  for (int i = 1; i <= num; i++) {
    
    sum = sum + i;
    std::cout << i << " ";
    
  }
  
  std::cout << "Sum: " << sum << "\n";
  
}
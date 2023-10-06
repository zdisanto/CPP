// CODECADEMY >> C++ >> Chapter 5 >> Review
/*
  Optional: Write a program to find the sum of even numbers and the product of odd numbers in a vector.
  For example:
  Suppose we have a vector that is {2, 4, 3, 6, 1, 9}.
  Then the program should output:
    Sum of even numbers is 12
    Product of odd numbers is 27
*/

#include <iostream>
#include <vector>
  
int main() {
  
    std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
    int sum = 0, product = 1;
  
    // Loop through the array:
    for (int i = 0; i < numbers.size(); i++) {
      // Calculate the sum of even numbers:
      if (numbers[i] % 2 == 0) {
        sum += numbers[i];

        // TESTING:
        // std::cout << "Evens = " << numbers[i] << "\n"; 
        // std::cout << "Sum = " << sum << "\n"; 

      // Calculate the product of odd numbers:
      } else { 
        product *= numbers[i];
        
        // TESTING:
        // std::cout << "Odds  = " << numbers[i] << "\n"; 
        // std::cout << "Product = " << product << "\n"; 
      }
        // TESTING:
        // std::cout << "i = " << i << "\n"; 
    }
  
    // Print it out:
    std::cout <<  "Sum of even numbers is " << sum << "\n"; 
    std::cout <<  "Product of odd numbers is "<< product << "\n"; 
}
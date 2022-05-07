// CODECADEMY >> C++ >> Chapter 5 >> Lesson 1 >> Vectors >> REVIEW
/*
    Optional: Write a program to find the sum of even numbers 
                               and the product of odd numbers in a vector.
    For example:
        Suppose we have a vector that is {2, 4, 3, 6, 1, 9}.
        Then the program should output:
            Sum of even numbers is 12
            Product of odd numbers is 27
*/

#include <iostream>
#include <vector>
  
int main() {
  
  // Array of numbers 1-9
  std::vector<int> numbers = {5, 2, 4, 7, 3, 6, 8, 1, 9};

  // Add 10 to the end of the array
  numbers.push_back(10);
  // Add 11 to the end of the array
  numbers.push_back(11);
  // Remove the last element in the array (11)
  numbers.pop_back();
  
  // If ODD = 0, then product would be 0.
  int even = 0, odd = 1; 

  // Go through the Array one by one
  for (int i = 0; i < numbers.size(); i++) {
    // If element in array (i) is divisible by two 
    if (numbers[i] % 2 == 0) {
      // Then it is even
      even = even + numbers[i];
    } else {
      // If not, then it's odd
      odd = odd * numbers[i];
    }
    //TESTING:
    //std::cout << numbers[i] << "\n";
  }

  // Print it out
  std::cout << "Sum of even numbers: " << even << "\n";
  std::cout << "Product of odd numbers: " << odd << "\n";
}
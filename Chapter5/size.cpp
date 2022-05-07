// CODECADEMY >> C++ >> Chapter 5 >> Lesson 1 >> Vectors >> .size()
/*
    The .size() function returns the number of elements in the vector.
    Add a few more items to the grocery list using .push_back().
        Print the size of grocery using .size().
    Is it the same as you expected?
*/
#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  grocery.push_back("Apple");
  grocery.push_back("Orange");
  
  std::cout << grocery.size() << "\n"; 
}
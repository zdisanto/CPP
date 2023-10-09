//  CODECADEMY >> C++ >> Chapter 6 >> Functions >> Code Challenge >> Water Plant
/*
    1. Define a function needs_water() that accepts:
        - First argument: An int number of days since the previous watering.
        - Second argument: A bool value is_succulent. (A value of true would indicate that the plant is a succulent.)
    Inside the function, you’ll need some conditional logic:
        - If is_succulent is false and days is greater than 3, return "Time to water the plant.".
        - If is_succulent is true and days is 12 or less, return "Don't water the plant!".
        - If is_succulent is true and days is greater than or equal to 13, return "Go ahead and give the plant a little water.".
        - Otherwise, return "Don't water the plant!".
    Note: Don’t print the strings; return them from the function.
*/
#include <iostream>

// Define needs_water() here:
std::string needs_water(int days, bool is_succulent) {
  if (is_succulent == false && days > 3) {
    return "Time to water the plant.";

    // bool is_succulent is automatically set to true
  } else if (is_succulent == true && days <= 12) {
    return "Don't water the plant!";

    // so '== true' is not needed: 
  } else if (is_succulent && days >= 13) {
    return "Go ahead and give the plant a little water.";
  } else {
    return "Don't water the plant!";
  }
}

int main() {
  std::cout << needs_water(10, false) << "\n";
}
//  CODECADEMY >> C++ >> Chapter 6 >> Functions >> Code Challenge >> Tenth Power
/*
    1. Write a function named tenth_power() that has:
        - An int parameter named num.
    The function should return num raised to the 10th power.
*/

#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num) {
  double power = 1;
  for (int i = 0; i < 10; i++) {
    power = power * num;
  }
  return power;
}

int main() {
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
}
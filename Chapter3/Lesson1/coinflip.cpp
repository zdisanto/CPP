// CODECADEMY >> C++ >> Chapter 3 >> Lesson 1 >> Conditionals & Logic >> COIN FLIP DEMO
/* 
    Run the program 5 times to see an if else statement in action!
    How many times did it go Heads?
*/
#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
  
  // Create a number that's 0 or 1
  
  srand (time(NULL));
  int	coin = rand() % 2;
  
  // If number is 0: Heads
  // If it is not 0: Tails
  
  if (coin == 0) {
  
    std::cout << "Heads\n";
  
  }
	else {
	
    std::cout << "Tails\n";
  
  }
  
}
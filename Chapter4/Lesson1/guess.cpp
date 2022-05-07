// CODECADEMY >> C++ >> Chapter 4 >> Lesson 1 >> Loops >> GUESS NUMBER
/*
    Inside guess.cpp, we have a program that asks the user to 
    guess a number between 1-10 and the answer is 8!
    Now instead of just asking for the user to answer it once, 
    let’s add a while loop so that they answer it up to 50 times!
        while (guess != 8 && tries < 50) {
            std::cout << "Wrong guess, try again: ";
            std::cin >> guess;
            tries++;
        }
    The && symbol means and and it combines two conditions into one.
    In this while loop, while guess does not equal to 8 
    and the number of tries is less than 50, 
    we are asking the user to type a number once again. 
    And then we add 1 to tries using the ++ operator.
*/

#include <iostream>

int main() {

    int guess;
  
    int tries = 0;

    std::cout << "I have a number 1-10.\n";
    std::cout << "Please guess it: ";
    std::cin >> guess;
 
    // Write a while loop here:
    while (guess != 8 && tries < 50) {
 
    std::cout << "Wrong guess, try again: ";
    std::cin >> guess;
 
    tries++;
 
    }

    if (guess == 8) {
    
        std::cout << "You got it!\n";
  
    }  
  
}
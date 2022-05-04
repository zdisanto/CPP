// CODECADEMY C++ REVIEW 1
/* 
    Use the open space in review.cpp to practice what you learned about variables. 
    Here are some ideas:
        - Create a program that takes in the weight of an item and then 
        calculates how much that item would weigh on Mars.
        - Create a program that asks for a distance in miles as input. 
        The program will then output how much that distance is in kilometers.
*/

#include <iostream>

int main() {
    // Add your code below  

    // First Idea:
    double earthWeight;

    std::cout << "Enter a weight of an item in pounds (lbs): ";
    std::cin >> earthWeight; 

    double moonWeight = earthWeight * 0.165; 

    std::cout << "\n" << earthWeight << " lbs is converted into " << moonWeight << " lbs.\n";

    // Second Idea: 
    double miles;

    std::cout << "Enter a distance in miles: ";
    std::cin >> miles;

    double kilometers = miles * 1.609344;

    std::cout << "\n" << miles << " miles is converted into " << kilometers << " kilometers.\n";
}

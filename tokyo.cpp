// CODECADEMY >> C++ >> Chapter 5 >> Lesson 1 >> Vectors >> CREATING & INITIALIZING A VECTOR & INDEX 
/*
    Suppose the Tokyo Subway costs are as follows:
        Ticket	Adult	Child
        24-hour	¥800	¥400
        48-hour	¥1200	¥600
        72-hour	¥1500	¥750
    We have initialized the subway_adult already for you.
    Initialize the subway_child vector with:
        400
        600
        750
    Note: The vector can still be double even though the values entered are ints.
    What is the element at index 2 in the subway_child vector?
    Find out the answer by outputting it out using std::cout.
*/
#include <iostream>
#include <vector>

int main() {
   
    std::vector<double> subway_adult = {800, 1200, 1500};
  
    // Give subway_child some values:
    std::vector<double> subway_child = {400, 600, 750};

    // What number at index 2 of subway_child?
    std::cout << subway_child[2];
  
}
// CODECADEMY C++ REVIEW 2
/*  
    Optional: Little Mac is an interplanetary space boxer, 
    who is trying to win championship belts for various weight 
    categories on other planets within the solar system.
    
    Write a space.cpp program that helps him keep track of his target weight by:
    - It should ask him what his earth weight is.
    - Ask him to enter a number for the planet he wants to fight on.
    - It should then compute his weight on the destination planet.
    
    + Here is the table of conversion:
          #	  Planet	Relative Gravity
          1	  Mercury	      0.38
          2	  Venus	        0.91
          3	  Mars	        0.38
          4	  Jupiter	      2.34
          5	  Saturn	      1.06
          6	  Uranus	      0.92
          7	  Neptune	      1.19
*/

#include <iostream>

int main() {
  double earthWeight = 0;
  int planet = 0;
  double planetWeight = 0;

  std::cout << "How much do you weigh on planet Earth? ";
  std::cin >> earthWeight;

  std::cout << "Which planet do you want to fight on?\n";
  std::cout << "Type 1 for Mercury\n";
  std::cout << "Type 2 for Venus\n";
  std::cout << "Type 3 for Mars\n";
  std::cout << "Type 4 for Jupiter\n";
  std::cout << "Type 5 for Saturn\n";
  std::cout << "Type 6 for Uranus\n";
  std::cout << "Type 7 for Neptune\n";
  std::cin >> planet;

  if (planet == 1) {
    planetWeight = earthWeight * .38;
    std::cout << "You will weigh " << planetWeight << " pounds!\n";  
  } else if (planet == 2) {
    planetWeight = earthWeight * .91;
    std::cout << "You will weigh " << planetWeight << " pounds!\n";  
  } else if (planet == 3) {
    planetWeight = earthWeight * .38;
    std::cout << "You will weigh " << planetWeight << " pounds!\n";  
  } else if (planet == 4) {
    planetWeight = earthWeight * 2.34;
    std::cout << "You will weigh " << planetWeight << " pounds!\n";  
  } else if (planet == 5) {
    planetWeight = earthWeight * 1.06;
    std::cout << "You will weigh " << planetWeight << " pounds!\n";  
  } else if (planet == 6) {
    planetWeight = earthWeight * .92;
    std::cout << "You will weigh " << planetWeight << " pounds!\n";  
  } else if (planet == 7) {
    planetWeight = earthWeight * 1.19;
    std::cout << "You will weigh " << planetWeight << " pounds!\n";  
  } else {
    std::cout << "FATAL ERROR::Unknown planet\n             Unknown weight\n";
  }
}
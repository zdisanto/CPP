// CODECADEMY >> C++ >> Chapter 3 >> Lesson 1 >> Conditionals & Logic >> SWITCH STATEMENT
/*
    Inside pokedex.cpp, we have a switch statement!
    Let’s add 3 more cases right before default:
        case 7 that outputs “Squirtle”
        case 8 that outputs “Wartortle”
        case 9 that outputs “Blastoise”
*/
#include <iostream>

int main() {
  
  int number = 9;
  
  switch(number) {
    
    case 1 :
      std::cout << "Bulbusaur\n";
      break;
    case 2 :
      std::cout << "Ivysaur\n";
      break;
    case 3 :
      std::cout << "Venusaur\n";
      break;
    case 4 :
      std::cout << "Charmander\n";
      break;
    case 5 :
      std::cout << "Charmeleon\n";
      break;
    case 6 :
      std::cout << "Charizard\n";
      break;
    case 7 :
      std::cout << "Squirtle\n";
      break;
    case 8 :
      std::cout << "Wartortle\n";
      break;
    case 9 :
      std::cout << "Blastoise\n";
      break;
    default :
      std::cout << "Unknown\n";
      break;
  }
}
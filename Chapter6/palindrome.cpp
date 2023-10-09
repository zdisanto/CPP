//  CODECADEMY >> C++ >> Chapter 6 >> Functions >> Code Challenge >> Palindrome
/*
    1. Define a function is_palindrome() that takes:
        - An std::string parameter text.
    The function should return:
        - true if text is a palindrome.
        - false if text is not a palindrome.
    (A palindrome is any text that has the same characters backwards as it does forwards. For example, “hannah” and “racecar” are palindromes, while “menu” and “aardvark” are not.)
    We will not test for edge cases such as capitalization or spaces.
*/
#include <iostream>
#include <vector>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {
  std::string reverseText = "";
  std::vector<char> characters;
  int halfIt = text.length() - 1;
  for (int i =  0; i < text.length(); i++) {
      characters.push_back(text[i]);
  }
  for (int j = halfIt; j > - 1; j--) {
        reverseText.push_back(characters[j]);
  }
  if (text == reverseText) {
      return true;
  } else {
      return false;
  }
}

int main() {
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
}
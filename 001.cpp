#include <iostream>

bool isPalindrome(const std::string & text) {
  bool isPalindrome = true;
  for(int i = 0; i < text.length() / 2; i++) 
  {
    if(text[i] != text[text.length() - i - 1]) isPalindrome = false;
  }
  return isPalindrome;
}

int main() {
  std::string word;
  std::cout << "Podaj tekst: ";
  std::cin >> word;

  if(isPalindrome(word)) std::cout << "Podany tekst jest palindromem.";
    else std::cout << "Podany tekst nie jest palindromem.";
    
return 0;
}

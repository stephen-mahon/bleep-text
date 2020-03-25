#include <iostream>
#include <string>
#include "functions.hpp"

int main(){

  std::string word = "broccoli";
  std::string text = "I love broccoli. I love the taste of broccoli. I love that broccoli makes me feel great.";
  std::cout << text << "\n\n";
  std::cout << bleep(word, text) << "\n";
}

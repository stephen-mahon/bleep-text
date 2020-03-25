#include <iostream>
#include <vector>
#include <string>

std::string bleep(std::string word, std::string text){

  std::string bleep_text;

  std::string bleep_word;
  for(int i=0; i<word.size();i++){
    bleep_word += "*";
  }

  std::string word_item;
  std::vector<std::string> words_in_text;

  for(int i=0; i<text.size(); i++){
    if(text[i]==' ' or text[i]=='.'){
      words_in_text.push_back(word_item);
      word_item = text[i];
      words_in_text.push_back(word_item);
      word_item = "";
    } else{
      word_item += text[i];
    }
  }

  for(int i=0; i<words_in_text.size(); i++){
    if(words_in_text[i]==word){
      bleep_text += bleep_word;
    } else {
      bleep_text += words_in_text[i];
    }
  }

  return bleep_text;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "stringFunc.h"

int mostCapitalCountWord(const char* str, char* theWord){
  int maxCount = 0;
  int currentCount = 0;
  char currentWord[MAX_LENGTH];
  int wordIndex = 0;

  theWord[0] = '\0';
  for(int i=0; str[i] != '\0'; i++){
    if(str[i] == ' ' || str[i] == '\0'){
        currentWord[wordIndex]='\0';
        if(currentCount > maxCount){
            maxCount = currentCount; 
            strcpy(theWord,currentWord);
        }
        currentCount = 0;
        wordIndex = 0;
    }
    else{
        currentWord[wordIndex++] = str[i];
        if(isupper(str[i])) currentCount++;
    }
  }
  if(wordIndex > 0){
      currentWord[wordIndex]='\0';
      if(currentCount > maxCount){
            maxCount = currentCount; 
            strcpy(theWord,currentWord);
        }
  }
  return maxCount;

}

void removeSpace(char* str){
  int isSpace = 0;
  int j = 0;
  
  for(int i=0; str[i] != '\0'; i++){
      if(str[i] != ' '){
        str[j++] = str[i];
        isSpace = 0;
      }else if(isSpace == 0){
        str[j++] = ' ';
        isSpace = 1;
      }
  }
  str[j] = '\0';
}



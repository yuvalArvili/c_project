#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "questions.h"
#include "stringFunc.h"


void q1()
{

  char str1[SIZE];
  char str2[SIZE];
  printf("please enter a word ");
  scanf("%s",str1);
  str1[strcspn(str1, "\n")] = '\0'; 
  
  getchar();
  printf("the string is: %s \n",str1);
  printf("please enter a sentence ");
  fgets(str2,SIZE,stdin);
  str2[strcspn(str2, "\n")] = '\0';
  printf("\n"),
  puts(str2);
  
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  if(len1 == len2)
    printf("The strings have the same length \n");
  else if(len1 > len2)
    printf("%s is longer \n",str1);
  else
    printf("%s is longer \n",str2);
    
  int res = strcmp(str1, str2);
  if (res == 0)
    printf("The strings are the same \n");
  else if(res > 0)
    printf("%s is first in dict  \n",str2);
  else
    printf("%s is first in dict  \n",str1);
    
  char str3[SIZE];
  if(len1+len2+2 > SIZE)
    printf("the string is to long \n");
  else{
    strcpy(str3,str1);
    strcat(str3,"$");
    strcat(str3,str2);
    printf("the string is %s \n",str3);
  }
}



void q2()
{
  char str[SIZE];
  char theWord[SIZE];
  printf("please enter a sentence ");
  fgets(str,SIZE,stdin);
  str[strcspn(str, "\n")] = '\0';
  printf("\n");
  int res = mostCapitalCountWord(str,theWord);
  printf("the word with the most capital letters is: %s with %d capital letters \n",theWord,res);
}

void q3()
{
	char str[] = "What       a beautiful    day!";

	printf("Base string is: %s \n", str);

	removeSpace(str);

	printf("New string is: %s \n", str);
}

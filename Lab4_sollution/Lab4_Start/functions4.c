#include <stdio.h>
#include <ctype.h>

#include "functions4.h"


void reverseArray(int* arr, int size){
	int temp;
	for(int i=0;i<size/2;i++){
		temp = *(arr + i);
		*(arr + i) = *(arr + (size - 1 - i));
		*(arr + (size - 1 - i)) = temp;

	}
	
}

int paintMatrix(int* mat, int rows,int cols,int rindex,int cindex,int val){
      if(rindex < rows && cindex < cols){
          *(mat + rindex * cols + cindex) = val;
          return 1;
      }
      return 0;


}

int checkPalindromeArr(int* arr,int size){
      int start,end;
      for(int i=0;i<size/2;i++){
          start = *(arr + i);
          end = *(arr + (size - 1 - i));
          if(start != end)
              return 0;
      }
      return 1;
}

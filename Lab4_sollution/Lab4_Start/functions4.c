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

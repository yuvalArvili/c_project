#include <stdio.h>
#include <ctype.h>

#include "functions3.h"



int calc(float num1, float num2, float* div, float* mul){
	*mul = num1*num2;
	if (num2 != 0){
		*div = num1/num2;
		return 1;
	}
	return 0;

}
void changeChar(char* ch){
	if(*ch >= 48 && *ch <= 57){
		*ch = 'D';
		return;
	}
	if(*ch >= 65 && *ch <= 90){
		*ch = 'C';
		return;
	}
	if(*ch >= 97 && *ch <= 122){	
		*ch = 'S';
		return;
	}
	*ch = 'O';


}














#include "lab2.h"
#include <ctype.h>
int checkArray(int arr[], int size){
	
	int min = arr[0];
	for(int i=1; i<size;i++){
		if(arr[i] <= min)
			return 0;
		else min=arr[i];
	}

	return 1;

}

int countCharInMat(char mat[][COLS],int rows,int cols, char tav){

	int count =0;
	for(int i=0; i<rows;i++){
		for(int j=0; j< cols;j++){
			if(tolower(mat[i][j]) == tolower(tav)) 
				count++;
		}
	}
	return count;




}

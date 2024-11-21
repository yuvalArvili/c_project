#include <stdio.h>
#include <ctype.h>
#include "arrays.h"

void printArray(int lst[], int size){
	for(int i=0; i< size;i++)
	      printf("%d ",lst[i]);	
}

void initArray(int lst[], int size){
	printf("please enter %d numbers", size);
	for(int i; i<size;i++)
		scanf("%d ",&lst[i]);
}

void printMat(char mat[][COLS],int rows,int cols){
	for(int i=0; i< rows;i++){
		for(int j=0; j< cols;j++)
			printf("%d ",mat[i][j]);	
	}
}
 
void initMat(char mat[][COLS],int rows,int cols){
	printf("please enter %d numbers", rows*cols);
	char c;
	for(int i; i<rows;i++){
		for(int j=0; j< cols;j++){
			do{
			    scanf("%c ",&c);
			  } while(isspace(c));
			  mat[i][j] = c;
		
		}
	}		
}





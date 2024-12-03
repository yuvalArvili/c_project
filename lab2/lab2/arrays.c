#include <stdio.h>
#include <ctype.h>
#include "arrays.h"

void printArray(int lst[], int size){
	for(int i=0; i< size;i++)
	      printf("%d ",lst[i]);	
}

void initArray(int lst[], int size){
	printf("please enter %d numbers\n", size);
	for(int i=0; i<=size-1;i++){
		scanf("%d",&lst[i]);
	      }
	      
}

void printMat(char mat[][COLS],int rows,int cols){
	for(int i=0; i<= rows-1;i++){
		for(int j=0; j<= cols-1;j++){
			printf("%c\t",mat[i][j]);	
                }
                printf("\n");
	}
}
 
void initMat(char mat[][COLS],int rows,int cols){
	printf("please enter %d numbers", rows*cols);
	char c;
	for(int i=0; i<=rows-1;i++){
		for(int j=0; j<=cols-1;j++){
			do{
			    scanf("%c",&c);
			  } while(isspace(c));
			  mat[i][j] = c;
		
		}
	}		
}





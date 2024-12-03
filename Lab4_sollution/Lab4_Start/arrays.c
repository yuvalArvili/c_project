#include <stdio.h>
#include <ctype.h>

#include "arrays.h"

void printArray(int* arr,int size){
	for(int i=0; i<size;i++){
		printf("%d",*arr);
		arr++;
	}
	printf("\n");

}

void initArray(int* arr, int size){
	for(int i=0; i<size;i++){
		printf("please enter a number ");
		scanf("%d",arr); 
		arr++;
	}
	


}

void printMat(int* mat,int rows,int cols){
	for(int i=0; i<rows;i++){
		for(int j=0; j<cols;j++){
			printf("%5d",*mat);
			mat++;
		}
		printf("\n");
	}
	printf("\n");




}


void initMat(int* mat,int rows,int cols){
	printf("please enter %d numbers ", rows*cols);
	for(int i=0; i<rows*cols;i++){
		scanf("%d",mat); 
		mat++;
	}
	printf("\n");
}


void printArrayRevers_Offset(int* arr,int size){
	for(int i=size-1;i>=0;i++){
		printf("%d",*(arr + i));
		printf(" ");
	}
	printf("\n");
}


void printArrayRevers_WP(int* arr,int size){
	for(int i=size-1;i>=0;i++){
		printf("%d",*(arr+size-1));
		printf(" ");
		arr--;
	}
	printf("\n");
	


}

























 

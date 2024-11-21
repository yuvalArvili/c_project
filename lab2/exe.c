#include <stdio.h>
#include <ctype.h>

#include "exe.h"
#include "lab2.h"
#include "arrays.h"


void q1_A()
{
	int arr[] = { 1, 2, 3, 4};
	int size = sizeof(arr)/sizeof(int);	
	
	printArray(arr,size);
	int res = checkArray(arr,size);
	
	if(res)
		printf("Growing\n");
	else
		printf("Not Growing\n");



}

void q1_B()
{
	int arr[ARRAY_SIZE];
	//for(int i=0;i<ARRAY_SIZE;i++)//
	initArray(arr,ARRAY_SIZE);
		
	printArray(arr,ARRAY_SIZE);
	int res = checkArray(arr,ARRAY_SIZE);
	
	if(res)
		printf("Growing\n");
	else
		printf("Not Growing\n");
	
}

void q2()
{
	char mat[ROWS][COLS];
	initMat(mat,3,4);
	printMat(mat,3,4);
	
	int count = countCharInMat(mat,3,4,'a');
	printf("count = %d", count);
	

}

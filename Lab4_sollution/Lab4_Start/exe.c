
#include <stdio.h>
#include <ctype.h>

#include "arrays.h"
#include "functions4.h"
#include "exe.h"

#define N 5
#define R 2
#define C 2


void q_ReverseArr()
{
	int arr[N];
	initArray(arr,N);
	printArray(arr,N);
	reverseArray(arr,N);
	printArray(arr,N);
	
}


void q_PrintMat()
{
	int mat[R][C];
	initMat((int *)mat,R,C);
	printMat((int *)mat,R,C);
	

}

void q_PrintArrReverse()
{
	



}

void q_PrintMixMatrix()
{
	int mat[R][C];
	initMat((int*)mat,R,C);
	printMat((int*)mat,R,C);
	int x = (R*C)/2;
	int y = R*C - x;
	printArrayRevers_Offset((int*)mat ,x);
	printArrayRevers_WP((int*)mat + x ,y);
	

}	

void q_PaintMatrix()
{
      int mat[R][C];
      initMat((int*)mat,R,C);
      if (paintMatrix((int*)mat,R,C,1,1,8)==0)
          printf("the index out of matrix \n");
      paintMatrix((int*)mat,R,C,1,1,8);
      printMat((int*)mat,R,C); 
      
}

void q_Palindrome()
{
      int arr[N];
      initArray(arr,N);
      if(checkPalindromeArr(arr,N) == 0){
        printf("the array is not palindrom \n");
        printArray(arr,N);
        return;
        }
      printf("the array is palindrom \n");
      printArray(arr,N);
	



}



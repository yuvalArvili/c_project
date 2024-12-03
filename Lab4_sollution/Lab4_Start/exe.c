
#include <stdio.h>
#include <ctype.h>

#include "arrays.h"
#include "functions4.h"
#include "exe.h"

#define N 5
#define R 2
#define C 2


/*void q_ReverseArr()
{
	int arr[N];
	initArray(arr,N);
	printArray(arr,N);
	reverseArray(arr,N);
	printArray(arr,N);
	
}*/


/*void q_PrintMat()
{
	int mat[R][C];
	initMat((int *)mat,R,C);
	printMat((int *)mat,R,C);
	

}*/

void q_PrintArrReverse()
{
	



}

void q_PrintMixMatrix()
{
	int mat[R][C];
	initMat((int *)mat,R,C);
	printMat((int *)mat,R,C);
	int x = (R*C)/2;
	int y = R*C - x;
	printArrayRevers_Offset((int*)mat ,x);
	printArrayRevers_Offset((int*)mat + x ,y);
	

}	

void q_PaintMatrix()
{


}

void q_Palindrome()
{
	



}



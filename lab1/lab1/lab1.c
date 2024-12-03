#include <stdio.h>
#include "lab1.h"

void helloWorld(){
printf("Hello World");
}

void printTriangle(int base){
  for(int i=1; i<=base;i++){
  	for(int j=1; j<=base-i;j++){
  		printf(" ");
  		}
		for(int k=1; k<=i; k++){
			printf("*");
		}
		printf("\n");
  	}
  	
  	
  }




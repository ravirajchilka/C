
#include<stdio.h>
#include<stdlib.h>

/*
  
  *
  **
  ***
  ****
  ***
  **
  *

*/

int main() {
	int rows = 8;
	for(int i=0;i<rows/2;i++) {
		for(int k=0;k<=i;k++) {
			printf("*");
		}
    	printf("\n");
	}

	for(int i=rows/2;i>=0;i--) {
		for(int k=0;k<=i;k++) {
			printf("*");
		}
    	printf("\n");
	}

	return 0;	
}

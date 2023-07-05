#include<stdio.h>

/*
 	   *
	  **
	 ***
	****

*/

int main() {
	int rows = 5;
	for(int i=0;i<rows;i++) {
		for(int k=rows-i;k>0;k--) {
			printf(" ");
		}
		for(int j=0;j<i+1;j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;	
}



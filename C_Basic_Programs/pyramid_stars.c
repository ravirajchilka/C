#include<stdio.h>

/*
 	*
   ***
  *****
 *******
*********

*/

int main() {
	int rows = 5;
	int n = rows;
	int spaces = rows-1; 

	for(int i=0;i<n;i++) {
		int odd = (2*i)+1;
		for(int j=spaces-i;j>0;j--) {
			printf(" ");
		}
		for(int k=odd;k>0;k--) {
			printf("*");
		}
		for(int j=spaces-i;j>0;j--) {
			printf(" ");
		}
		printf("\n");	
	}

	return 0;	
}



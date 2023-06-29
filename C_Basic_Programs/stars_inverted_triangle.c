
#include<stdio.h>
#include<stdlib.h>

/*
	*******
	 *****
	  ***
 	   *
*/

int main() {
	int rows = 4;
	int n = (rows*2)-1;
	for(int i=0;i<rows;i++) {
		for(int k=0;k<i;k++) {
			printf(" ");
		}
		for(int j=n;j>0;j--) {
			printf("*");
		}
		n -= 2;
		printf("\n");
	}
	
	return 0;	
}

#include<stdio.h>

/*
     *
    **
   ***
  ****
 *****
******
 *****
  ****
   ***
    **
     *
*/

int main() {
	int rows = 10;
	for(int i=0;i<rows/2;i++) {
		for(int j=(rows/2)-i;j>0;j--) {
			printf(" ");
		}
		for(int k=0;k<=i;k++) {
			printf("*");
		}
    	printf("\n");
	}

	for(int i=rows/2;i>=0;i--) {
		for(int j=0;j<(rows/2)-i;j++) {
			printf(" ");
		}
		for(int k=0;k<=i;k++) {
			printf("*");
		}
    	printf("\n");
	}
	return 0;	
}


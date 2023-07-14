
#include<stdio.h>

/*
  	   *
  	  ***
  	 *****
  	*******
  	 *****
  	  ***
  	   *
*/

int main() {
	int rows = 7;
	for(int i=0;i<=rows/2;i++) {
		for(int k=(rows/2)-i;k>0;k--) {
			printf(" ");
		}
		for(int j=0;j<(i*2)+1;j++) {
			printf("*");
		}
		printf("\n");
	}

	for(int i=rows/2;i>=0;i--) {
		for(int k=(rows/2)-i;k>0;k--) {
			printf(" ");
		}
		for(int j=0;j<(i*2)+1;j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;	
}



#include<stdio.h>

/*
     *****
    *****
   *****
  *****
 *****
*/

int main() {
	int rows = 5;
	int spaces = rows-1;
	for(int i=0;i<rows;i++) {
		for(int j=rows-i;j>0;j--) {
			printf(" ");
		}
		for(int k=0;k<rows;k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;	
}

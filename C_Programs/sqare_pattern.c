#include<stdio.h>

/*
		****
		*  *
		****
*/

int main() {
	int rows = 3;
	int cols = 4;
	for(int i=0;i<rows;i++) {
		for(int k=0;k<cols;k++) {
			if(i==1) {
				if(k==1 || k==rows-1) {
					printf(" ");
				} else {
					printf("*");
				}
			} else {
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;	
}


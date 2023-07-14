#include<stdio.h>

/*
		
*
--
***
----
*****
------
*******
*******
------
*****
----
***
--
*

*/

int main() {
	int rows = 3;
	for(int i=0;i<=rows;i++) {
		for(int k=0;k<i*2;k++) {
			printf("-");
		}
		printf("\n");

		for(int j=0;j<(i*2)+1;j++) {
			printf("*");
		}
		printf("\n");
	}

	for(int i=rows;i>=0;i--) {
		for(int j=0;j<(i*2)+1;j++) {
			printf("*");
		}
		printf("\n");
		for(int k=0;k<i*2;k++) {
			printf("-");
		}
		printf("\n");
	}
	return 0;	
}



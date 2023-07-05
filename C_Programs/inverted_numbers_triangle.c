#include<stdio.h>

/*
 	12345
	1234
	123
	12
	1

*/

int main() {
	int rows = 5;
	for(int i=rows;i>0;i--) {
		for(int k=1;k<=i;k++) {
			printf("%d",k);
		}
		printf("\n");
	}

	return 0;	
}

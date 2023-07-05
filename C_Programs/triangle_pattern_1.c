#include<stdio.h>

/*

*
**
***
****

*/

int main() {
	int rows = 4;
	for(int i=1;i<rows+1;i++) {
		for(int k=0;k<i;k++) {
			printf("*");
		}
		printf("\n");
	}
}


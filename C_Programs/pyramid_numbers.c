#include<stdio.h>

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

int main() {
	int rows = 5;
	for(int i=0;i<rows;i++) {
		for(int j=0;j<=i;j++) {
			printf("%d ",j+1);
		}
		printf("\n");	
	}

	return 0;	
}

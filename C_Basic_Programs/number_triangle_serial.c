#include<stdio.h>

/*
  	  1
	  2 3
	  4 5 6
	  7 8 9 10

*/

int main() {
	int rows = 7;
	int num = 0;

	for(int i=1;i<rows+1;i++) {
		for(int k=0;k<i;k++) {
			num++;
			printf("%d ",num);
		}
		printf("\n");
	}	

	return 0;	
}

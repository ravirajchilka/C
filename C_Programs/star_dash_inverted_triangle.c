#include<stdio.h>

/*
		
*-----------*
 *---------*
  *-------*
   *-----*
    *---*
      *
*/

int main() {
	int rows = 5;
	for(int i=rows;i>0;i--) {
		for(int k=rows-i;k>0;k--) {
			printf(" ");	
		}
		printf("*");
		for(int j=1;j<=i*2+1;j++) {
			printf("-");
		}
		printf("*");
		printf("\n");
	}
	printf("      *\n");
	return 0;	
}




#include<stdio.h>

/*
		
      *
     *-*
    *---*
   *-----*
  *-------*
 *---------*

*/

int main() {
	int rows = 5;
	printf("      *\n");

	for(int i=0;i<rows;i++) {
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

	return 0;	
}



#include<stdio.h>
#include<stdlib.h>

/*

**** 
***
**
*

*/

int main() {
	int rows = 4;
	for(int i=rows;i>=0;i--) {
		for(int k=i;k>0;k--) {
			printf("*");
		}	
	printf("\n");	
	}
}

#include<stdio.h>

int main() {
	int ar[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int partition = 3;
	int counter = 0;

	for(int i=0;i<12;i++) {
		counter++;
		printf("%d\n",ar[i]);
		if(counter%partition==0) {
			printf("\n");
		}
	}

	return 0;	
}

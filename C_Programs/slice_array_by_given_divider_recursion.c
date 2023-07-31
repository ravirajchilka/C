#include<stdio.h>

void printAr(int *ar, int size, int divide) {
	if(divide>=12) {
		return;
	}
	for(int k=divide;k<divide+4;k++) {
		printf("%d\n",ar[k]);
	}
	printf("\n");
	printAr(ar,size,divide+=4);
}

int main() {
	int ar[] = {1,2,3,4,5,6,7,8,10,11,12,13};
	int size = sizeof(ar)/sizeof(int);
	printAr(ar,size,0);
	return 0;
}

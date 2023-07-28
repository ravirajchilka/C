#include<stdio.h>

void printAr(int *ar, int size, int divide) {
	for(int i=0;i<size;i=i+divide) {
		for(int k=i;k<i+divide;k++) {
			printf("%d\n",ar[k]);
		}
		printf("\n");
	}
}

int main() {
	int ar[] = {1,2,3,4,5,6,7,8,10,11,12,13};
	int size = sizeof(ar)/sizeof(int);
	printAr(ar,size,4);
	return 0;
}
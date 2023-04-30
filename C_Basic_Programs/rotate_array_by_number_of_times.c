#include<stdio.h>

int main() {
	int ar[7] = {13,4,5,8,7,6,54}; // 4,5,8,7,6,54,13
	int size = sizeof(ar)/sizeof(int);
	int noOfTimes = 3;

	while(noOfTimes>0) {
		noOfTimes--;
		int temp = ar[0];
			for(int i=0;i<size;i++) {
			ar[i] = ar[i+1];
		}
		ar[6] = temp;
	}

	for(int i=0;i<size;i++) {
		printf("%d | ",ar[i]);
	}	
	return 0;
}

#include<stdio.h>

int findmax(int *ar, int *max, int size) {
	for(int i=0;i<size;i++) {
		if(*max<*(ar+i)) {
			*max = *(ar+i);
		}
	}
	return *max;
}

int main() {
	int ar[8] = {-1,-78,3,-68,-9,-5,-14,-1};
	int max = -100000;
	int size = sizeof(ar)/sizeof(int);
	findmax(ar,&max,size);
	printf("max  %d\n",max);
	return 0;
}

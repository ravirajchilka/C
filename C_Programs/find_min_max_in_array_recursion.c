
#include<stdio.h>
#include<stdlib.h>

int findmax(int *ar, int *max, int size, int lastval) {
	if(*(ar)==lastval) {
		return *max;
	}	
	if(*max<*(ar)) {
		*max = *(ar);
	}
	findmax(ar+1,max,size,lastval);
}

int main() {
	int ar[8] = {1,-78,253,68,9,505,14,33};
	int max = -100000;
	int size = sizeof(ar)/sizeof(int);
	int lastvalue = ar[size-1];
	findmax(ar,&max,size,lastvalue);
	printf("max  %d\n",max);
	return 0;
}


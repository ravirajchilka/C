#include<stdio.h>

void printMids(int m, int *ar, int start, int end) {
	int mid = (start+end)/2;

	if(start==end || start>=mid) {
		return;
	}

	printf("%d\n",ar[mid]);
	printMids(m,ar,start,end/2);
	printMids(m,ar,mid,end);
}

void pMid(int m, int *ar, int start, int end) {
	int mid = (start+end)/2;
	if(start>=mid) {
		return;
	}
	printf("mid ---%d\n",ar[mid]);
	pMid(m,ar,mid,end);
}

int main() {
	int ar[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int size = sizeof(ar)/sizeof(int);
	int end = size;
	int start = 0;
	int mid = end/2;
	printMids(mid,ar,start,end);
	return 0;
}

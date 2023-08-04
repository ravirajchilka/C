
#include<stdio.h>
#include<stdlib.h>

int binarySearch(int target, int *ar,int start, int end) {
	int mid = (start+end)/2;
	if(end<start) {
		printf("no records");
		exit(0);		
	}
	if(ar[mid]==target) {
		printf("index %d\n",mid);
		return mid;
	} else {
		if(ar[mid]>target) {
			binarySearch(target,ar,start,mid-1);
		}		
		if(ar[mid]<target) {
			binarySearch(target,ar,mid+1,end);
		}
	}
}

int main() {
	int ar[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int size = sizeof(ar)/sizeof(int);
	int end = size;
	int start = 0;
	int target = 10;
	binarySearch(target,ar,start,end);
	return 0;
}


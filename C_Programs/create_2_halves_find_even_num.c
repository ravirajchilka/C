#include<stdio.h>

void findEvenNums(int *ar,int start, int end,int size, int counter) {
	counter++;
	for(int i=start;i<end;i++) {
		if(ar[i]%2==0) {
			printf("%d\n",ar[i]);
		}
	}
	if(counter==2) {
		return;
	}
	
	end = size;
	int mid = size/2;
	findEvenNums(ar,0,mid,size,counter);
	printf("-----%d\n",counter);
	findEvenNums(ar,mid+1,end,size,counter);
	printf("-----%d\n",counter);
}

int main() {
	int ar[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int size = sizeof(ar)/sizeof(int);
	int counter = 0;
	findEvenNums(ar,0,1,size,counter);
	return 0;
}

#include<stdio.h>

void printNums(int m, int *ar,int start, int end) {
	printf("nums %d\n",ar[start]);
	if(start<m) {
		printNums(m,ar,++start,m);
	}
	if(m<end-1) {
		printNums(m,ar,++m,end);
   } 
}

int main() {
    int ar[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int size = sizeof(ar)/sizeof(int);
    int end = size;
    int start = 0;
    int mid = end/2;
    printNums(mid,ar,start,end);
    return 0;
}


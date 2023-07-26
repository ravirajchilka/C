#include<stdio.h>

void add(int n, int *sum) {
	if(n==-1) {
		return;
	}
	*sum += n;
	add(n-1,sum);
}

int main() {
	int sum = 0;
	add(10,&sum);
	printf("total is %d\n",sum);
	return 0;
}

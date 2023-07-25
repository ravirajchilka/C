#include<stdio.h>

void sum(int n, int *tot) {
	if(n==0) {
		return;
	}
	*tot += n%10;
	 sum(n/10,tot);
}

int main() {
	int total = 0;
	sum(20,&total);
	printf("%d\n",total);
	return 0;
}

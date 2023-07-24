#include<stdio.h>

int main() {
	int n = 1234;
	int total = 0;

	while(n>0) {
		total += n%10;
		n = n/10;
	}
	printf("total %d",total);
	return 0;	
}

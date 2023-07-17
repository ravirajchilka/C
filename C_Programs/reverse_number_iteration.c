#include<stdio.h>

int main() {
	int n = 123456;
	int res = n%10;
	while(n>0) {
		n = n/10;
		res = res*10+(n%10);
	}
	res = res/10;
	printf("res %d",res);
	return 0;	
}

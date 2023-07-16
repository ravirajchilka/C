#include<stdio.h>

int main() {
	int limit = 10;
	int s = 1;
	int t = -1;
	int r = s+t;

	while(limit>0) {
		r = s+t;
		printf("%d\n",r);
		t = s;
		s = r;
		limit--;
	}
	return 0;	
}

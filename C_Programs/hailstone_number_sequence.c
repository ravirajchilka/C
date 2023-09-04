#include<stdio.h>

void hailstonesequence(int num, int *seq) {
	printf("%d\n",num);
	(*seq)++;
	if(num<=1) {
		return;
	}
	if(num%2==0) {
		num /= 2;
	} else {
		num = (num*3)+1;
		// can be writtne as num *= 3;num++;
	}
	hailstonesequence(num,seq);
}

int main() {
	int sequence = 0;
	hailstonesequence(13,&sequence);
	printf("sequence total %d\n",sequence);
	return 0;
}


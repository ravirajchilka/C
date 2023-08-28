#include<stdio.h>

void decimaltobinary(int num) {
	if(num>=1){
		decimaltobinary(num/2);
		if(num%2==0) {
			printf("%d",0);
		} else {
			printf("%d",1);
		}
	}
}

int main() {
	printf("decimal to binary : ");
	decimaltobinary(66);
	printf("\n");
	return 0;
}


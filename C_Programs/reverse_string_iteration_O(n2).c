#include<stdio.h>
#include<string.h>

void swap(char *a, char *b) {
	char temp = *b;
	*b = *a;
	*a = temp;
}

void reverse(char *str, int size) {
	for(int i=0;i<size;i++) {
		for(int k=size-1;k>i;k--) {
			swap(&str[k-1],&str[k]);
		}
	}
}

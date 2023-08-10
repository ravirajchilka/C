#include<stdio.h>

void swap(char *a, char *b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}

void reverse(char *str, int len) {
	for(int i=0;i<len/2;i++) {
		printf("%c - %c\n",str[i],str[len-1-i]);
		swap(&str[i],&str[len-i]);
	}
}

int main() {
	char s[] = "randomvalue";
	reverse(s,strlen(s)-1);
	return 0;
}

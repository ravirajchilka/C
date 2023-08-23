#include<stdio.h>

void swapchars(char *a, char *b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}

void reverse(char *s, int len, char *lastaddr) {
	if(s<=lastaddr) {
		printf("%c %c\n",*s,*lastaddr);
		swapchars(s,lastaddr);
		reverse(s+1,len,lastaddr-1);
	}
}

int main() {
	char str[] = "somevalue";
	int len = strlen(str);
	char *lastaddr = str+len-1;
	reverse(str,len-1,lastaddr);
	printf("%s",str);
	return 0;
}


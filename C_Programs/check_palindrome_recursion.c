#include<stdio.h>
#include<string.h>

void checkpalindrome(char *s, char *lastaddr) {
	if(s>=lastaddr) {
		printf("palindrome");
		return;
	}
	if(*s!=*lastaddr) {
		printf("not palindrome\n");
		return;
	}
	checkpalindrome(s+1,lastaddr-1);
}

int main() {
	char str[] = "radar";
	int len = strlen(str);
	char *lastaddress = str+len-1;
	checkpalindrome(str,lastaddress);
	return 0;
}



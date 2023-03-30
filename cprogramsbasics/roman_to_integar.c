
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int rtod[100];
	char s[] = "XXXV";
	int rlen = strlen(s);
	int total = 0;
	int temp = 0;

	rtod['I'] = 1;
	rtod['V'] = 5;
	rtod['X'] = 10;
	rtod['L'] = 50;
	rtod['C'] = 100;
	rtod['D'] = 500;
	rtod['M'] = 1000;
	rtod['\0'] = 0;

	for(int i=0;i<rlen;i++) {
		temp = rtod[*(s+i)];
		if(rtod[*(s+i)]>=rtod[*(s+i+1)]) {
			total += rtod[*(s+i)];
		} else {
			total -= temp;
		}
	}

	printf("total %d\n",total);
	return 0;
}



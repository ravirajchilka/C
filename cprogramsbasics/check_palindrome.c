#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>

int main() {
  char s[] = "tescabacset";
  int st = 0;
  int strLength = strlen(s)-1;
  int flag = true;
  int midPt = strLength/2;

  while(s[st]>midPt) {
    if(*(s+st) != *(s+strLength-st)) {
      flag = false;
      break;
    }
    st++;
  }

  printf("is palindrome? %d\n",flag);
  return 0;
}   


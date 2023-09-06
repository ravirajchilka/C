#include<stdio.h>

void findfirstuppercase(char *str) {  
  if(*str>=65 && *str<=90) {
    printf("%c\n",*str);
    return;
  }
  if(*str!='\0') {
    findfirstuppercase(str+1);
  }
}

int main() {
  char str[] = "something is Z going on here!";
  findfirstuppercase(str);
  return 0;
}

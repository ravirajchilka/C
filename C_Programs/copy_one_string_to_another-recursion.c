#include<stdio.h>

void copystring(char *str, char *nstr) {  
  if(*str!='\0') {
    *nstr = *str;
    copystring(str+1,nstr+1);
  }
}

int main() {
  char str[] = "something is going on here!";
  int len = sizeof(str)/sizeof(char)-1;
  char nstr[len];
  copystring(str,nstr);
  printf("%s\n",nstr);
  return 0;
}

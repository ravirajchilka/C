#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void removeChar(char *s, int len, char charVal) {
  for(int i=0;i<len;i++) {
    if(*(s+i)==charVal) {
      *(s+i) = 'W';
    }
  }
  printf("%s",s);
}

int main() {

  char s[] = "Testing-the-string!";
  int slen = strlen(s); 
  char *charPointer = strchr(s,'T');
  // ensures 'T' exist in the given string
  if(charPointer!=NULL) { 
    removeChar(s,slen,'T');
  }

}   

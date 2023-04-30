#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void removechar(char *s, int len, char charVal) {
  for(int i=0;i<len;i++) {
    if(*(s+i)==charVal) {
      *(s+i) = *(s+i+1);
    }
  }
  printf("string %s",s);
}

int main() {

  char s[] = "Testing-the-string!";
  int slen = strlen(s); 
  char *charPointer = strchr(s,'e');
  // ensures 'e' exist in the given string
  if(charPointer!=NULL) { 
    removechar(s,slen,'T');
  }

}   

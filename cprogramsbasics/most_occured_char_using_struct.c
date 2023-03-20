#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Characters {
    int total;
    char charVal;
};

int main() {
  char s[] = "where to go towards the beginning";
  char *sp = s;
  int slen = strlen(s);
  int max = 0;
  struct Characters *charMem = malloc(sizeof(struct Characters)*slen);

  for(int i=0;i<slen;i++) {
    int count = 1;
    for(int j=0;j<slen;j++) {
      if(i!=j) {
        if(s[i]==s[j] && s[i]!= ' ') {
          count++;
        }
      }
    }

    charMem[i].total = count;
    charMem[i].charVal = s[i];

    if(max<count) {
      max = count;
    }
  }

  for(int i=0;i<slen;i++) {
    if(charMem[i].total==max) {
      printf("count of %c is %d\n",charMem[i].charVal,charMem[i].total);
      break;
    }
  }

  free(charMem);
  return 0;
}


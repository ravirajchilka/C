#include<stdio.h>
#include<string.h>

int main() {
  char s[] = "speedingspeeding";
  char *sp = s;
  int slen = strlen(s);
  int max = 0;

  for(int i=0;i<slen;i++) {
    int count = 1;
    for(int j=0;j<slen;j++) {
      if(i!=j) {
        if(s[i]==s[j]) {
          count++;
        }
      }
    }
    if(max<count) {
      max = count;
    }
    printf("count, s[i] %d %c\n",count, s[i]);
  }
  printf("max %d",max);
  return 0;
}   

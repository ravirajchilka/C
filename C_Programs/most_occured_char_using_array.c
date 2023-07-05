#include<stdio.h>
#include<string.h>

int main() {
  char s[] = "twitter";  
  int ar[256] = {0};
  int len = strlen(s);
  int max = 0;
  char maxCharValue;

  for(int i=0;i<len;i++) {
     ar[s[i]]++;
     if(max< ar[s[i]]) {
      max = ar[s[i]];
      maxCharValue = s[i];
     }
  }

  printf("%c, %d",maxCharValue,max);
  return 0;
}

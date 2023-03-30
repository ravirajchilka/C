#include<stdio.h>
#include<string.h>

void replace_By(char *s,int slen,char replaceValue) {
  for(int i=0;i<slen;i++) {
    if(*(s+i)==' ') {
      *(s+i)=replaceValue;
    }     
  }
}

int main() {
  char str[] = "we are quescol";
  char replaceBy = 'p';
  int slength = strlen(str);

  replace_By(str,slength,replaceBy);
  printf("%s\n",str);

  return 0;
}   



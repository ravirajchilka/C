#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

  char vowels[] = "aeiouAEIOU";
  char input = 'i';
  char *vowelPtr = strchr(vowels,input);

  if(vowelPtr==NULL) {
    printf("value is consonant\n");
  } else {
    printf("memory address %p\n",vowelPtr);
    printf("value is vowel\n");
  }
  
  return 0;
}   

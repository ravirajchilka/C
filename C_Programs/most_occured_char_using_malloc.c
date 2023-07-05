#include<stdio.h>
#include<stdlib.h>

int main() {

  int ar[] = {1,2,3,2,5,1,1,1,5,5,5,5,5,5};
  int arSize = sizeof(ar)/sizeof(int);
  int *arMem= (int*)malloc(sizeof(int)*arSize);  
  int max = 0;
  int maxValue = 0;

  for(int i=0;i<arSize;i++) {
    arMem[ar[i]]++;
    if(arMem[ar[i]]>max) {
      max = arMem[ar[i]];
      maxValue = ar[i];
    }
  }

  printf("value %d repeadted %d times\n",maxValue,max);
  free(arMem);
  return 0;

}


#include<stdio.h>
#include<stdlib.h>

int main() {
  int ar[] = {3,5,6,7,8};
  int size = sizeof(ar)/sizeof(int);
  int *arMem = (int*)malloc(2*size*sizeof(int));

  for(int m=0;m<size;m++) {
    *(arMem+m) = *(ar+m);
  }

  for(int i=size-1;i>=0;i--) {
      arMem[i+1] = arMem[i];
  }

  for(int i=0;i<size+1;i++) {
      printf("%d\n",arMem[i]);
    }

  free(arMem);
  return 0;
}


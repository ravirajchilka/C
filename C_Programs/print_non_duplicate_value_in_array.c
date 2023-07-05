#include<stdio.h>

int main() {

  int ar[] = {1,2,3,2,5,1,1,1};
  int arSize = sizeof(ar)/sizeof(int);
  int arMem[arSize];
  int max = 0;
  int maxValue = 0;

  for(int i=0;i<arSize;i++) {
    arMem[ar[i]]++;
  }

  for(int i=0;i<arSize;i++) {
    if(arMem[ar[i]]==1) {
      printf("%d\n",ar[i]);   
    }
  }

  return 0;

}


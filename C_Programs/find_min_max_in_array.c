#include<stdio.h>

void printMaxMin(int *ar,int size) {
  int min = 0, max =0;
  for(int i=0;i<size;i++) {
    if(*(ar+i)>max) {
      max = *(ar+i);
    } 
  }
  min = max;
  for(int i=0;i<size;i++) {
    if(*(ar+i)<min) {
      min = *(ar+i);
    }
  }
  printf("min is %d and max is %d\n",min,max);
}


int main() {

  int ar[] = {300,1,34,22,1000,-40,90,114};
  int size = sizeof(ar)/sizeof(int);

  printMaxMin(ar,size);
  return 0;

}
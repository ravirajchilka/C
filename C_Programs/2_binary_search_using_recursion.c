#include<stdio.h>

void binsearch(int *ar, int len, int start, int last, int target) {
  int mid = (start+last)/2;
  if(mid==last) {
    printf("Item not found!\n");
    return;
  }
  if(ar[mid]==target) {
    printf("index and value is %d %d\n",mid,target);
    return;
  }
  if(target<ar[mid]) {
    binsearch(ar,len,0,mid-1,target);
  }
  if(target>ar[mid]) {
    binsearch(ar,len,mid+1,last,target);
  }
}

int main() {
  int ar[] = {2,3,5,6,8,9,10};
  int target = 2;
  int len = sizeof(ar)/sizeof(int);
  int last = len;
  binsearch(ar,len,0,last,target);
  return 0;
}


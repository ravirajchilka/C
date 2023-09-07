#include<stdio.h>

void findstair(int *ar, int *res,int len) {
  for(int j=0;j<10;j++) {
    int res = j;
    for(int i=0;i<len;i++) {
      res += *(ar+i);
      if(res<=0) {
        break;
      }
      if(i==len-1) {
        printf("%d\n",j); 
        return;
      }
    }
  }
}

int main() {
  int ar[] = {1,-4,-2,-3};
  int res = 0;
  int len = sizeof(ar)/sizeof(int);
  findstair(ar,&res,len);
  test();
  return 0;
}



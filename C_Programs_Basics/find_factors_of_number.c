#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
   int num = 15;

   while(num%2==0) {
      printf("val %d\n", 2);
      num = num/2;
   }

   for(int count=3;count<=sqrt(num);count+=2) {
      while(num%count==0) {
          printf("val %d\n", count);
          num = num/count;
      }
   }

   if(num>2) {
        printf("val %d\n", num);
   }

   return 0;
}


#include<stdio.h>
#include<stdlib.h>

int main() {
	int ar[] = {13,4,5,6,8,9,1,32,56};
	int size = sizeof(ar)/sizeof(int);
	int *mem = (int*)malloc(sizeof(int)*size);
	int index = -1;
	int givenValue = 32;

	for(int i=0;i<size;i++) {
		*(mem+i) = *(ar+i);
		if(*(mem+i)==givenValue) {
			index = i;
		}
	}

  if(index==-1) {
		printf("item doesnt exist in array\n");
		exit(0);
	}

	for(int k=0;k<size;k++) {
		if(k>index-1) {
			mem[k] = mem[k+1];
		}
	}
 	
	for(int i=0;i<size-1;i++) {
      printf("%d\n",mem[i]);
    }
	
	free(mem);
	return 0;
}


// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int findupperlimit(int len,int *limit) {
    if(len<=1) {
        return *limit;
    }
    *limit *= 10;
    findupperlimit(len-1,limit);
}

int main() {
    char str[] = "89500";
    int len = strlen(str);
    int total = 0;
    // 100 10 1
    int count = 0;
    int limit = 1;
    findupperlimit(len,&limit);
    for(int i=limit;i>=1;i=i/10) {
            total += (str[count++]-'0')*i;
    }
    
    printf("%d\n",total);
    return 0;
}


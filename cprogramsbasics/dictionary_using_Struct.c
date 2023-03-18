#include<stdio.h>
#include<stdlib.h>

struct Person
{
    int age;
    char* name;
};

int main() {
    int totalRecords = 5;
    struct Person *per = malloc(sizeof(struct Person) * totalRecords);

    per[0].age = 8;
    per[0].name = "Sam";

    per[1].age = 6;
    per[1].name = "Thomas";

    per[2].age = 24;
    per[2].name = "Anne";

    for(int i=0;i<3;i++) {
      printf("age %d\n name %s\n", per[i].age, per[i].name);
    }
    
    free(per);
    return 0;

}


#include<stdio.h>
#include<malloc.h>

typedef struct {
    char* name;
    int age;
} person;

int main()
{
    person* myperson = malloc(sizeof(person));

    myperson -> name = "Chandan Kumari Sharma";
    myperson -> age = 22;

    printf("my name is %s and I am %d years old\n", myperson->name, myperson->age);

    free(myperson);

    return 0;
}

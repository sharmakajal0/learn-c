#include<stdio.h>
#include<string.h>

int main()
{
    char name[] = { 75, 97, 106, 97, 108, 0 };
    int age = 27;

    if (strcmp(name, "Kajal1") == 0){
        printf("Hello, Kajal\n");
    } else {
        printf("You are not kajal, Go away\n");
    }

    printf("my name is %s and my age is %d\n", name, age);
    printf("%d\n", strlen(name));

    return 0;
}
#include<stdio.h>
#include<string.h>

int main()
{
    char *name = "Kajal";
    int age = 27;

    if (strncmp(name, "Jonas", 5) == 0){
        printf("Hello, Kajal\n");
    } else {
        printf("You are not kajal, Go away\n");
    }

    printf("my name is %s and my age is %d\n", name, age);
    printf("%d\n", strlen(name));

    return 0;
}
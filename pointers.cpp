#include<stdio.h>

void print_value_of_a(int** address_of_p)
{
    printf("%d\n", **address_of_p);
}

void print_value_of_a(int* address_of_a)
{
    printf("%d\n", *address_of_a);
}

int main()
{
    int a = 3;
    int* p = &a;
    int** pp = &p;
    print_value_of_a(pp);
    print_value_of_a(p);
    return 0;
}

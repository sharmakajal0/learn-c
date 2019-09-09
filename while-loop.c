#include<stdio.h>

int main()
{
    int n = 0;

    while (1) {
        n++;
        printf("The value of n is %d\n", n);
        if (n == 10) {
            break;
        }
    }

    return 0;
}
#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number: \n");
    scanf("%d", &n);
    if(n % 2 == 0){
        printf("The given number = %d is even\n", n);
    }

    return 0;
}
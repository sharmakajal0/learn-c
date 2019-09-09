#include<stdio.h>

int function1(int number);

int main()
{
    printf("the  value of function1 is %d\n", function1(1));

    return 0;
}

int function1(int number){
    return number * 2;
}
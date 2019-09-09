#include<stdio.h>

int runner(){
    static int count = 0;
    count++;
    return count;
}

int main()
{
    printf("The number of runners on the field is %d\n", runner());
    printf("The number of runners on the field is %d\n", runner());
    return 0;
}
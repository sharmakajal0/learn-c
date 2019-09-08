#include<stdio.h>

int main()
{
    int foo = 1;
    int bar = 2;
    int moo = 3;
    
    if (foo < bar && moo > bar) {
        printf("foo is smaller than bar AND moo is greater than bar\n");
    }

    if (foo < bar || moo > bar) {
        printf("foo is smaller than bar OR moo is greater than bar\n");
    }
    
    return 0;
}
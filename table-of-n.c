#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void print_arguments(int argc, char** argv) {
    for(int i=0; i<argc; i++) {
        printf("Argument %d is \"%s\"\n", i+1, argv[i]);
    }
}

int main(int argc, char** argv) {
    
    int i;
    print_arguments(argc, argv);
    if (argc != 2) {
        printf("Usage:\n\t%s number\n", argv[0]);
        return 1;
    }
    int n = atoi(argv[1]);
    printf("n = %d\n", n);

    for(i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", n, i, n*i);
    }    
    return 0;
}
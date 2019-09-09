#include<stdio.h>

int main()
{
    int n = 5;
    char* pvowels = (char * ) malloc(n * sizeof(char));
    int i;

    pvowels[0] = 'A';
    pvowels[1] = 'E';
    *(pvowels + 2) = 'I';
    pvowels[3] = 'O';
    *(pvowels + 4) = 'U';

    for (i = 0; i < n; i++) {
        printf("%c\n", pvowels[i]);
    }

    free(pvowels);
}
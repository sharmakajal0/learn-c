#include<stdio.h>
#include<string.h>

int main()
{
    char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    const char* pvowels;
    int i;

    // Printing Address of the vowels
    for (i = 0; i < strlen(vowels); i++) {
        printf("&vowels[%d]: %u, pvowels + %d: %u, vowels + %d: %u\n", i, &vowels[i], i, pvowels + i, i, vowels + i);
    }

    // Printing values of the vowels
    for (i = 0; i < strlen(vowels); i++){
        printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d):%c\n", i, vowels[i], i, *(vowels + i), i, *(vowels + i));
    }

    return 0;
}
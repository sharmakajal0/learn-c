#include<stdio.h>

typedef struct 
{
    char* brand;
    int model;
} vehicle;

int main()
{
    vehicle mycar;
    mycar.brand = "Maserati";
    mycar.model = 2018;

    printf("I have a car of brand %s and the model is %d\n", mycar.brand, mycar.model);

    return 0;
}


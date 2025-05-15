#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char*brand;
    char model[20];
    int year;
    int isAvailable;
} Car;

int main()
{
    Car c1 = {"Skoda","Fabia", 2020, 1};
    printf("%s\n", c1.brand);
    printf("%s\n", c1.model);
    printf("%d\n", c1.year);
    printf("%d\n", c1.isAvailable);
    return 0;
}

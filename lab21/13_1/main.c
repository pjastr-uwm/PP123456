#include <stdio.h>
#include <stdlib.h>

struct Car{
    char*brand;
    char model[20];
    int year;
    int isAvailable;
};

int main()
{
    struct Car c1 = {"Skoda","Fabia", 2020, 1};
    printf("%s\n", c1.brand);
    printf("%s\n", c1.model);
    printf("%d\n", c1.year);
    printf("%d\n", c1.isAvailable);
    return 0;
}

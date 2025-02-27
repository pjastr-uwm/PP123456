#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 0.1;
    float b = 1e16;
    float c = -1e16;
    printf("%f\n", a+(b+c));
    printf("%f\n", (a+b)+c);
    return 0;
}

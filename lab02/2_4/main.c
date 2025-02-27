#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a=4, b= 16, c=64;
    printf("%f", pow(abs(a)* abs(b)* abs(c), 1/3.0));
    return 0;
}

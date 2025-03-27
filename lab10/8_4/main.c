#include <stdio.h>
#include <stdlib.h>

double findMax(double const * num1, double * const num2){
    if (*num1 >= *num2){
        return *num1;
    }
    return *num2;
}

int main()
{
    double x = -3.6, y = 8.2;
    printf("%lf\n", findMax(&x, &y));
    return 0;
}

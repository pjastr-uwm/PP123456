#include <stdio.h>
#include <stdlib.h>

int check(double (*f1)(double), double (*f2)(double), int n){
    for(int i=0;i>=-n;i--){
        if (f1(i) * f2(i) <= 0){
            return 0;
        }
    }
    return 1;
}

double foo1(double arg){
    return arg*arg;
}
double foo2(double arg){
    return arg+9;
}

int main()
{
    printf("%d\n", check(foo1,foo2, 3));
    return 0;
}

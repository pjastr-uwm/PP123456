#include <stdio.h>
#include <stdlib.h>

int calculate(int (*operation)(int), int number){
    return operation(number);
}

int foo(int arg){
    return arg+10;
}

int foo2(int x){
    return 5;
}

int main()
{
    printf("%d\n", calculate(foo,9));
    printf("%d\n", calculate(abs,-3));
    printf("%d\n", calculate(foo2,9));
    return 0;
}

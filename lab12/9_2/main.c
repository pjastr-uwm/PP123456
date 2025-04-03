#include <stdio.h>
#include <stdlib.h>

void applyFunction(int (*func)(int), int start, int end){
    for(int i=start; i<=end;i++){
        printf("%d\n", func(i));
    }
}

int cube(int x){
    return x*x*x;
}

int main()
{
    applyFunction(cube, 6,10);
    return 0;
}

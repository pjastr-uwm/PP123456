#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y){
    return x+y;
}

int sumVals(int * p1, int *p2){
    return *p1 + *p2;
}

void addPtr(int *p1, int*p2, int*p3){
    *p3 = *p1 + *p2;
}

int main()
{
    int x =6, y=10;
    printf("%d\n", sum(x,y));
    printf("%d\n", sumVals(&x, &y));
    int result;
    addPtr(&x,&y,&result);
    printf("%d\n", result);
    return 0;
}

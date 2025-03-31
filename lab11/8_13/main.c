#include <stdio.h>
#include <stdlib.h>

int * minPtr(int* p1, int*p2, int*p3){
    if (*p1 >= *p2){
        if (*p2 >= *p3){
            return p3;
        }
        return p2;
    }
    if (*p1 >= *p3){
        return p3;
    }
    return p1;
}

int main()
{
    int x=-8,y=-4,z=12;
    int* result = minPtr(&x, &y, &z);
    printf("%d\n", *result);
    return 0;
}

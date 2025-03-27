#include <stdio.h>
#include <stdlib.h>

int* initInts(){
    int * temp = malloc(3*sizeof(int));
    if (temp == NULL){
        return NULL;
    }
    *temp = 5;
    *(temp+1) = -12;
    *(temp+2) = 33;
    return temp+1;
}

int main()
{
    int * pointer = initInts();
    printf("%d\n", *(pointer-1));
    printf("%d\n", *pointer);
    printf("%d\n", *(pointer+1));
    free(pointer-1);
    return 0;
}

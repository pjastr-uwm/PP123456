#include <stdio.h>
#include <stdlib.h>

float* initFloats(){
    float * wsk = malloc(3*sizeof(float));
    if (wsk ==NULL){
        return NULL;
    }
    *wsk = 4.5;
    *(wsk+1) = 2.3;
    *(wsk+2) = -4.2;
    return wsk;
}

int main()
{
    float * result = initFloats();
    printf("%f\n", *result);
    printf("%f\n", *(result+1));
    printf("%f\n", *(result+2));
    free(result);
    return 0;
}

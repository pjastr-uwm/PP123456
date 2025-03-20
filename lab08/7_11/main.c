#include <stdio.h>
#include <stdlib.h>

int calculateArithmeticSequenceRecursively(int n, int d){
    if (n==1){
        return 1;
    }
    return d+calculateArithmeticSequenceRecursively(n-1, d);
}

int main()
{
    printf("%d\n", calculateArithmeticSequenceRecursively(5,6));
    return 0;
}

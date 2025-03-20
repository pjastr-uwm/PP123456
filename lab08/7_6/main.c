#include <stdio.h>
#include <stdlib.h>

float calculatePowerOfTwo(int n){
    if (n>=0){
        int temp=1;
        for(int i=1;i<=n;i++){
            temp *=2;
        }
        return temp;
    }
    float temp=1;
    for(int i=-1;i>=n;i--){
        temp /=2;
    }
    return temp;
}

int main()
{
    printf("%f\n", calculatePowerOfTwo(2));
    printf("%f\n", calculatePowerOfTwo(0));
    printf("%f\n", calculatePowerOfTwo(-3));
    return 0;
}

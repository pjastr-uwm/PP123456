#include <stdio.h>
#include <stdlib.h>

int calculateFactorial(int n){
    if (n<0){
        exit(-1);
    }
    int temp =1;
    for(int i=1;i<=n;i++){
        temp *=i;
    }
    return temp;
}

int main()
{
    printf("%d\n", calculateFactorial(5));
    return 0;
}

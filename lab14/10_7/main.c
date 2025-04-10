#include <stdio.h>
#include <stdlib.h>

int maxValue(int n, int *tab){
    if (n==1){
        return *tab;
    }
    return *tab >= maxValue(n-1, tab+1) ? *tab : maxValue(n-1, tab+1);
}

int main()
{
    int tab[] = {3,7,3,7,8,8};
    printf("%d\n", maxValue(6, tab));
    return 0;
}

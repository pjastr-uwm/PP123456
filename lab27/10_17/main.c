#include <stdio.h>
#include <stdlib.h>

int findElement(int tab[], int n, int val, int (*isEqual)(int,int)){
    for(int i=0;i<n;i++){
        if (isEqual (tab[i], val)){
            return i;
        }
    }
    return -1;
}

int equal1(int arg1, int arg2){
    if (arg1 == arg2){
        return 1;
    }
    return 0;
}

int equal2(int arg1, int arg2){
    if (arg1 %5 == arg2%5){
        return 1;
    }
    return 0;
}

int main()
{
    int tab[] = {1,-4,5,6,-7};
    printf("%d\n", findElement(tab, 5, 6, equal1));
    printf("%d\n", findElement(tab, 5, 6, equal2));
    return 0;
}

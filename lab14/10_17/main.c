#include <stdio.h>
#include <stdlib.h>

int findElement(int tab[], int n, int val, int (*isEqual)(int, int)){
    for(int i=0;i<n;i++){
        if (isEqual(val, tab[i]) == 1){
            return i;
        }
    }
    return -1;
}

int eq1(int a,int b){
    return a==b;
}

int eq2(int a,int b){
    return a%5 == b%5;
}

int main()
{
    int tab[] = {3,4,5,2,9};
    printf("%d\n", findElement(tab, 5, 7, eq1));
    printf("%d\n", findElement(tab, 5, 7, eq2));
    return 0;
}

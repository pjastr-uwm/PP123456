#include <stdio.h>
#include <stdlib.h>

int minIdxMax(int n, int tab[]){
    int ind=0;
    for(int i=1;i<n;i++){
        if (tab[i] <= tab[ind]){
            ind = i;
        }
    }
    return ind;
}

int main()
{
    int tab[] = {3,7,3,7,8,8};
    printf("%d\n", minIdxMax(6, tab));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void shiftLeft(int n, int tab[]){
    int temp = tab[0];
    for(int i=0;i<n-1;i++){
        tab[i] = tab[i+1];
    }
    tab[n-1] = temp;
}

void printTable(int n, int tab[]){
    for(int i=0;i<n;i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main()
{
    int tab[] = {3,4,5,-8,2};
    printTable(5, tab);
    shiftLeft(5, tab);
    printTable(5, tab);
    return 0;
}

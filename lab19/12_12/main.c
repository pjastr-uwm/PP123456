#include <stdio.h>
#include <stdlib.h>

void revColArr(int n, int m, int **tab){
    for(int i=0;i<n/2;i++){
        int * temp = tab[i];
        tab[i] =  tab[n-1-i];
        tab[n-1-i] = temp;
    }
}

void printTable(int n, int m, int ** tab){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("[%d][%d] = %d, ",i,j,tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int ** tab = malloc(3*sizeof(int*));
    tab[0] = malloc(2*sizeof(int));
    tab[1] = malloc(2*sizeof(int));
    tab[2] = malloc(2*sizeof(int));
    tab[0][0] =  4; tab[0][1] = -3;
    tab[1][0] =  9; tab[1][1] =  5;
    tab[2][0] = -2; tab[2][1] =  7;
    printTable(3,2,tab);
    revColArr(3,2,tab);
    printTable(3,2,tab);
    return 0;
}

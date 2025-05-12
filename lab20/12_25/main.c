#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortOne(int n, int tab[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if (tab[j] > tab[j+1]){
                swap(&tab[j], &tab[j+1]);
            }
        }
    }
}

void sortRows(int n, int m, int **tab){
    for(int i=0;i<n;i++){
        sortOne(m, tab[i]);
    }
}

void printTable(int n,int m, int ** tab){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("[%d][%d] = %2d, ",i,j,tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int ** tab= malloc(4*sizeof(int*));
    tab[0] =  malloc(3*sizeof(int));
    tab[1] =  malloc(3*sizeof(int));
    tab[2] =  malloc(3*sizeof(int));
    tab[3] =  malloc(3*sizeof(int));
    tab[0][0] =  1; tab[0][1] =  2; tab[0][2] =  3;
    tab[1][0] =  0; tab[1][1] = -5; tab[1][2] =  8;
    tab[2][0] =  9; tab[2][1] =  8; tab[2][2] = -2;
    tab[3][0] = -3; tab[3][1] =  5; tab[3][2] =  4;
    printTable(4,3, tab);
    sortRows(4,3,tab);
    printTable(4,3, tab);
    return 0;
}

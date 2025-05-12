#include <stdio.h>
#include <stdlib.h>

int ** transCopy(int n, int **tab){
    int ** temp = malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        temp[i] = malloc(n*sizeof(int));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[i][j] = tab[j][i];
        }
    }
    return temp;
}

void printTable(int n, int ** tab){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("[%d][%d] = %2d, ",i,j,tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int ** tab=malloc(2*sizeof(int *));
    tab[0] = malloc(2*sizeof(int));
    tab[1] = malloc(2*sizeof(int));
    tab[0][0] =  4; tab[0][1] = -6;
    tab[1][0] = -3; tab[1][1] =  8;
    printTable(2, tab);
    int ** w = transCopy(2, tab);
    printTable(2, tab);
    printTable(2, w);
    return 0;
}

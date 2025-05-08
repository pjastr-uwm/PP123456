#include <stdio.h>
#include <stdlib.h>

void transpose(int n, int tab[n][n]){
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            int temp = tab[i][j];
            tab[i][j] = tab[j][i];
            tab[j][i] = temp;
        }
    }
}

void printTable(int n, int m, int tab[n][m]){
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
    int tab[3][3] = {{4,5,-2},{3,-1,8},{9,-8,9}};
    printTable(3,3,tab);
    transpose(3, tab);
    printTable(3,3,tab);
    int tab2[4][4] = {{4,5,-2,9},{3,-1,5,8},{9,2,-8,9},{-2,3,9,2}};
    printTable(4,4,tab2);
    transpose(4, tab2);
    printTable(4,4,tab2);
    return 0;
}

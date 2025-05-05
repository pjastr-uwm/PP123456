#include <stdio.h>
#include <stdlib.h>

int maxRowIdx(int n, int m, int tab[n][m]){
    int maximum = tab[0][0];
    int rowIndex=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (maximum < tab[i][j]){
                maximum = tab[i][j];
                rowIndex = i;
            }
        }
    }
    return rowIndex;
}

int main()
{
    int tab[2][3] = {{2,4,-8},{1,8,4}};
    printf("%d\n", maxRowIdx(2,3,tab));
    int tab2[4][3] = {{2,4,-8},{1,8,4}, {2,3,8}, {-9,6,8}};
    printf("%d\n", maxRowIdx(4,3,tab2));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

float oddAvg(int ** tab, int n, int m){
    float sum=0;
    int counter=0;
    for(int i=1;i<n;i+=2){
        for(int j=1;j<m;j+=2){
            sum += tab[i][j];
            counter++;
        }
    }
    return sum/counter;
}

float oddAvg2(int ** tab, int n, int m){
    float sum=0;
    for(int i=1;i<n;i+=2){
        for(int j=1;j<m;j+=2){
            sum += tab[i][j];
        }
    }
    return sum/((n/2)*(m/2));
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
    int ** tab=malloc(4*sizeof(int*));
    tab[0] = malloc(5*sizeof(int));
    tab[1] = malloc(5*sizeof(int));
    tab[2] = malloc(5*sizeof(int));
    tab[3] = malloc(5*sizeof(int));
    tab[4] = malloc(5*sizeof(int));
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            tab[i][j] = i+j;
        }
    }
    printTable(4,5,tab);
    printf("%f\n", oddAvg(tab,4,5));
    printf("%f\n", oddAvg2(tab,4,5));
    return 0;
}

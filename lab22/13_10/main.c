#include <stdio.h>
#include <stdlib.h>

struct Airplane{
    char * model;
    int number_of_engines;
};

int min_engines(struct Airplane tab[], int n){
    int temp=tab[0].number_of_engines;
    for(int i=1;i<n;i++){
        if(tab[i].number_of_engines < temp){
            temp = tab[i].number_of_engines;
        }
    }
    return temp;
}

int main()
{
    struct Airplane tab[] ={
        {"AA", 4},
        {"BB", 2},
        {"BB", 6}
    };
    printf("%d\n",min_engines(tab,3) );
    return 0;
}

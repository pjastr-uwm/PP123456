#include <stdio.h>
#include <stdlib.h>

void findMaxValue(int numbers[], int size){
    int temp = numbers[0];
    for(int i=1;i<size;i++){
        if (numbers[i] >temp){
            temp = numbers[i];
        }
    }
    printf("%d\n", temp);
}

void findMaxValue2(int * numbers, int size){
    int temp = * numbers;
    for(int i=1;i<size;i++){
        if (*(numbers+i) >temp){
            temp = *(numbers+i);
        }
    }
    printf("%d\n", temp);
}

int main()
{
    int tab[] = {4,-3,2,3,-11};
    findMaxValue(tab, 5);
    findMaxValue2(tab, 5);
    return 0;
}

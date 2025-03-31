#include <stdio.h>
#include <stdlib.h>

void swap(int *ptr1, int*ptr2){
    int temp=*ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int x =8, y=-5;
    printf("%d %d\n",x,y);
    swap(&x,&y);
    printf("%d %d\n",x,y);
    return 0;
}

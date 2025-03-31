#include <stdio.h>
#include <stdlib.h>

void swapSign(int *ptr1, int*ptr2){
    if (*ptr1 * *ptr2 <0){
        int temp=*ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
}

int main()
{
    int x =8, y=-5;
    printf("%d %d\n",x,y);
    swapSign(&x,&y);
    printf("%d %d\n",x,y);
    return 0;
}

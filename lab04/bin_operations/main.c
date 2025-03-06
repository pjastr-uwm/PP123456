#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d\n", 6&11);
    printf("%d\n", 6|11);
    printf("%d\n", 6^11);
    printf("%d\n", ~11);
    printf("%d\n", 11<<2);
    printf("%d\n", 11<<3);
    printf("%d\n", 11>>2);
    printf("%d\n", 11>>3);
    return 0;
}

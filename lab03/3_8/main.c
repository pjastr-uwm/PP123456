#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    int maks = x >= y ? x : y;
    printf("%d", maks);
    return 0;
}

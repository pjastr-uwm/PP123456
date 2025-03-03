#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    a %2 ==0 ? printf("parzysta\n") : printf("nieparzysta\n");
    return 0;
}

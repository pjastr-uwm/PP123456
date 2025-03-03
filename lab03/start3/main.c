#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a%2 !=0 ){
        printf("Liczba nieparzysta");
    }
    else{
        printf("Liczba parzysta");
    }
    return 0;
}

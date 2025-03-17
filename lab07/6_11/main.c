#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n<0){
        n = -n;
    }
    int suma=0;
    if (n==0){
        printf("0\n");
    }
    while(n>0){
        int cyfra = n%10;
        suma += cyfra;
        printf("%d\n", cyfra);
        n /= 10;
    }
    printf("Suma cyfra: %d\n", suma);
    return 0;
}

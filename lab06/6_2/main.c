#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int suma;
    for(int i=1;i<=n;i++){
        suma += i;
    }
    printf("suma wynosi %d\n", suma);
    return 0;
}

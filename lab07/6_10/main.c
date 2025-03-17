#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=2;i<=n/2;i++){
        //if (n%i ==0){
        //    printf("Dzielnik %d\n",i);
        //}
        if (!(n%i)){
            printf("Dzielnik %d\n",i);
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ile5=0, ile2=0, ile1=0;
    while(n>=5){
        ile5++;
        n -=5;
    }
    while(n>=2){
        ile2++;
        n -=2;
    }
    while(n>=1){
        ile1++;
        n -=1;
    }
    printf("%d %d %d\n", ile5, ile2, ile1);
    return 0;
}

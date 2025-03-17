#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n<3){
        printf("Takich liczb nie ma");
        return -1;
    }
    int prev, curr, next;
    printf("Podaj a1:\n");
    scanf("%d", &prev);
    printf("Podaj a2:\n");
    scanf("%d", &curr);
    int counter=0;
    for(int i=3;i<=n;i++){
        printf("Podaj a%d\n", i);
        scanf("%d", &next);
        if (2 * curr < prev + next){
            counter++;
        }
        prev = curr;
        curr = next;
    }
    printf("Takich liczb  jest %d", counter);
    return 0;
}

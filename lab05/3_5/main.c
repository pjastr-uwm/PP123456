#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rok;
    scanf("%d", &rok);
    if (rok%4 !=0){
        printf("rok nie jest przestepny\n");
    }
    else{
        if (rok%100 !=0){
            printf("rok jest przestepny\n");
        }
        else{
            if (rok %400 ==0){
                printf("rok jest przestepny\n");
            }
            else{
                printf("rok nie jest przestepny\n");
            }
        }
    }
    return 0;
}

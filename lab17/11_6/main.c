#include <stdio.h>
#include <stdlib.h>

void toLowerNew(char txt[]){
    for(int i=0; txt[i] !=0;i++){
        if ('A' <= txt[i] && txt[i] <= 'Z'){
            txt[i] += ('a'-'A');
        }
    }
}

int main()
{
    char t1[] = "ABCabc123";
    printf("%s\n", t1);
    toLowerNew(t1);
    printf("%s\n", t1);
    return 0;
}

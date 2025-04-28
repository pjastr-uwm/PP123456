#include <stdio.h>
#include <stdlib.h>

int indexLower(char * txt){
    for(int i=0;txt[i] !=0;i++){
        if ('a' <= txt[i] && txt[i] <='z'){
            return i;
        }
    }
    return 0;
}

int main()
{
    printf("%d\n", indexLower("Olsztyn"));
    printf("%d\n", indexLower(""));
    printf("%d\n", indexLower("4554"));
    return 0;
}

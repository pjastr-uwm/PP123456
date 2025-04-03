#include <stdio.h>
#include <stdlib.h>

void executeSequence(void (*operation)(int), int count){
    for(int i=1;i<=count;i++){
        operation(i);
    }
}

void hexPrint(int x){
    printf("%x\n", x);
}

int main()
{
    executeSequence(hexPrint, 25);
    return 0;
}

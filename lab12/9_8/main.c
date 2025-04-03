#include <stdio.h>
#include <stdlib.h>

int modifyValue(int x, int(*modifier)()){
    return x+ modifier();
}

int foo(){
    return 100;
}

int main()
{
    printf("%d\n", modifyValue(6, foo));
    return 0;
}

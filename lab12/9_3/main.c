#include <stdio.h>
#include <stdlib.h>

int check(int (*f1)(int), int (*f2)(int), int n){
    if (n<=0){
        exit(-1);
    }
    for(int i=0;i<=n;i++){
        if (f1(i) != f2(i)){
            return 0;
        }
    }
    return 1;
}

int foo1(int x){
    return x;
}

int foo2(int x){
    return x%5;
}

int main()
{
    printf("%d\n", check(foo1, foo2,4));
    printf("%d\n", check(foo1, foo2,5));
    return 0;
}

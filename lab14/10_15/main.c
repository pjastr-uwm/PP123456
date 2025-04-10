#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    return *a-*b;
}

int main()
{
    int tab[] = {3,3,0,0,3,3,-4,-4,0,1};
    int *wsk=tab-1;
    int b = *(wsk+=4); //b=0
    int c = b+3; // b=0  , c=3
    int d = foo(&b,&c); // b=0  , c=3  , d=-3
    int e = (wsk+=-1)[4]; // b=0  , c=3  , d=-3  , e=-4
    e = (d *= 2) + (c += 2); // b=0  , c=5  , d=-6  , e=-1
    c = d + (b+=4); // b=4  , c=-2  , d=-6  , e=-1
    e= (--c)-(d++);  // b=4  , c=-3  , d=-5  , e=3
    b = *wsk + e; // b=3  , c= -3 , d= -5 , e=3
    return 0;
}

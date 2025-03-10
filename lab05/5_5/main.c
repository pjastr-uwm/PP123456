#include <stdio.h>
int main() {
    float a = 10.5;  // a =10.5 , b = , c =
    float b = 2.0;   // a =10.5 , b =2 , c =
    float c = 0.5;   // a =10.5 , b =2 , c =0.5
    a = a / b;       // a =5.25 , b =2 , c =0.5
    b = b * 3;       // a =5.25 , b =6 , c =0.5
    c = a + b;       // a = , b = , c =
    a = c - a;       // a = , b = , c =
    b = b / 2;       // a = , b = , c =
    c = a * b;       // a = , b = , c =
    a = c + 0.5;     // a = , b = , c =
    b = a - c;       // a = , b = , c =
    c = a / b;       // a = , b = , c =
    return 0;
}

#include <stdio.h>

int main() {
    int a = 10; // a =10 , b =
    int b = 5;  // a =10 , b =5
    a = a + b;  // a =15 , b =5
    b = a - b;  // a =15 , b =10
    a = a - b;  // a =5 , b =10
    b = a * b;  // a =5 , b =50
    a = b / a;  // a =10 , b =50
    b = a << 2; // a =10 , b =40
    a = b >> 1; // a =20 , b =40
    b = a & b;  // a =20 , b =0
    a = a ^ b;  // a =20 , b =0
    b = ~a;     // a =20 , b =-21
    return 0;
}

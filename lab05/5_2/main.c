#include <stdio.h>

int main() {
    int a = 10; // a =10 , b = , c =
    int b = 5;  // a =10 , b =5 , c =
    int c = 0;  // a =10 , b =5 , c =0
    a = a + b;  // a =15 , b =5 , c =0
    b = a - b;  // a =15 , b =10 , c =0
    a = a - b;  // a =5 , b =10 , c =0
    c = a;      // a =5 , b =10 , c =5
    a = b * c;  // a =50 , b =10 , c =5
    b = a / c;  // a =50 , b =10 , c =5
    c = b << 2; // a =50 , b =10 , c =40
    b = c >> 1; // a =50 , b =20 , c =40
    a = b & c;  // a =0 , b =20 , c =40
    c = a ^ b;  // a = 0, b =20 , c =20
    b = ~c;     // a =0 , b =-21 , c =20
    return 0;
}

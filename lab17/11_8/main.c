#include <stdio.h>
#include <stdlib.h>

void strCopyNew(char src[], char dest[]){
    int i;
    for(i=0; src[i] !=0;i++){
        dest[i] = src[i];
    }
    dest[i] = 0;
}

int main()
{
    char txt1[] = "ABC";
    char txt2[20];
    printf("%s %s\n", txt1,txt2);
    strCopyNew(txt1, txt2);
    printf("%s %s\n", txt1,txt2);
    return 0;
}

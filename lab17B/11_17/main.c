#include <stdio.h>
#include <stdlib.h>

void rmOdd(char txt[]){
    int i=0,j=0;
    for(i=0;txt[i] !=0;i++){
        if (i%2==0){
            txt[j]=txt[i];
            j++;
        }
    }
    txt[j] = 0;
}

int main()
{
    char t1[]= "OLSZTYN";
    rmOdd(t1);
    printf("%s\n", t1);
    char t2[]= "";
    rmOdd(t2);
    printf("%s.\n", t2);
    char t3[]= "R";
    rmOdd(t3);
    printf("%s.\n", t3);
    char t4[]= "RT";
    rmOdd(t4);
    printf("%s.\n", t4);
    return 0;
}

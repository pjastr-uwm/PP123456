#include <stdio.h>
#include <stdlib.h>

int length(char txt[]){
    int i;
    for(i=0;txt[i] != '\0'; i++){

    }
    return i;
}

int length2(char txt[]){
    int i=0;
    while(txt[i] != '\0'){
        i++;
    }
    return i;
}
int length3(char txt[]){
    int i=0;
    while(txt[i]){
        i++;
    }
    return i;
}
int length4(char txt[]){
    if (txt[0] ==0){
        return 0;
    }
    return 1+length4(txt+1);
}
int length5(char *txt){
    if (*txt ==0){
        return 0;
    }
    return 1+length5(txt+1);
}

int length6(char *txt){
    if (!*txt){
        return 0;
    }
    return 1+length6(txt+1);
}


int main()
{
    char t1[] = "Olsztyn";
    printf("%d\n", length(t1));
    printf("%d\n", length2(t1));
    printf("%d\n", length3(t1));
    printf("%d\n", length4(t1));
    printf("%d\n", length5(t1));
    printf("%d\n", length6(t1));
    return 0;
}

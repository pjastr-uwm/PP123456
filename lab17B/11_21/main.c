#include <stdio.h>
#include <stdlib.h>

int length(const char * txt){
    int i=0;
    while(txt[i] !=0){
        i++;
    }
    return i;
}

char* toLowerNew(const char*txt){
    int d=length(txt);
    char*temp = malloc((d+1)*sizeof(char));
    for(int i=0;i<d;i++){
        temp[i] = txt[i];
        if ('A'<=temp[i] && temp[i]<= 'Z'){
            temp[i] +=32;
        }
    }
    temp[d] = 0;
    return temp;
}

int main()
{
    char t1[]="XYZabcKLM678";
    char *w1 = toLowerNew(t1);
    printf("%s\n", w1);
    char * t2 = "tswHGFG65r";
    char*w2 = toLowerNew(t2);
    printf("%s\n", w2);
    return 0;
}

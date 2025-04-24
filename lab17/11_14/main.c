#include <stdio.h>
#include <stdlib.h>

void wStrCopyNew(wchar_t src[], wchar_t dest[]){
    int i;
    for(i=0; src[i] !=0;i++){
        dest[i] = src[i];
    }
    dest[i] = 0;
}

int main()
{
    wchar_t txt1[] = L"Olsztyn";
    wchar_t txt2[20];
    wprintf(L"%s %s\n", txt1,txt2);
    wStrCopyNew(txt1, txt2);
    wprintf(L"%s %s\n", txt1,txt2);
    return 0;
}

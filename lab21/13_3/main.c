#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
    float width;
    float height;
    char *color;
};

int main()
{
    struct Rectangle tab[] = {
        {4.5, 3.2, "red"},
        {1.2, 8.7, "green"},
        {3.4, 9.4, "blue"},
        {2.3, 6.5, "pink"}
    };
    for(int i=0;i<4;i++){
        printf("%f %f %s\n", tab[i].width, tab[i].height, tab[i].color);
    }
    return 0;
}

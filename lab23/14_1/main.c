#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->x = 4;
    list->next = malloc(sizeof(struct element));
    list->next->x = 5;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -12;
    list->next->next->next = NULL;
    struct element * ptr =list;
    while(ptr != NULL){
        printf("%p %d\n", ptr, ptr->x);
        ptr = ptr->next;
    }
    return 0;
}

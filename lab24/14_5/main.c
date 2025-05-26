#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printPos(struct element * list){
    struct element * ptr =list;
    while(ptr != NULL){
        if(ptr->x >0){
            printf("%d\n", ptr->x);
        }
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->x = -4;
    list->next = malloc(sizeof(struct element));
    list->next->x = 5;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -12;
    list->next->next->next = NULL;
    printPos(list);
    return 0;
}

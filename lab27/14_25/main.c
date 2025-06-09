#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * removeList(struct element * list){
    if (list == NULL){
        return NULL;
    }
    struct element * current = list;
    struct element * next;
    while(current != NULL){
        next = current->next;
        free(current);
        current = next;
    }
    return NULL;
};

void printList(struct element * list){
    if(list == NULL){
        printf("Empty list\n---\n");
        return;
    }
    struct element * ptr = list;
    while(ptr != NULL){
        printf("%d\n", ptr->x);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->x = 12;
    list->next = malloc(sizeof(struct element));
    list->next->x = -4;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 5;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = 7;
    list->next->next->next->next = NULL;
    printList(list);
    list = removeList(list);
    printList(list);
    return 0;
}

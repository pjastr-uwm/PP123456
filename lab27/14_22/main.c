#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void removeLast(struct element * list){
    struct element * prev = list;
    struct element * current = list->next;
    if(current == NULL){
        return;
    }
    while(current->next != NULL){
        prev = prev->next;
        current = current->next;
    }
    prev->next = NULL; // prev->next = current->next;
    free(current);
}

void printList(struct element * list){
    if(list->next == NULL){
        printf("Empty list\n---\n");
        return;
    }
    struct element * ptr = list->next;
    while(ptr != NULL){
        printf("%d\n", ptr->x);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = -4;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 5;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = 7;
    list->next->next->next->next = NULL;
    printList(list);
    removeLast(list);
    printList(list);
    removeLast(list);
    printList(list);
    removeLast(list);
    printList(list);
    removeLast(list);
    printList(list);
    removeLast(list);
    return 0;
}

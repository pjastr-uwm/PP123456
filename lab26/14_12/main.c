#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};


void addLast(struct element * list, int a){
    struct element * current = list;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = malloc(sizeof(struct element));
    current->next->x = a;
    current->next->next = NULL;
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
    list->next = NULL;
    printList(list);
    addLast(list, 9);
    printList(list);
    addLast(list, -4);
    printList(list);
    addLast(list, 7);
    printList(list);
    return 0;
}

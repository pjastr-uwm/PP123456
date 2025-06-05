#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void addFirst(struct element * list, int a){
    struct element * ptr = malloc(sizeof(struct element));
    ptr->x = a;
    ptr->next = list->next;
    list->next = ptr;
};

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
    addFirst(list, 8);
    printList(list);
    addFirst(list, -3);
    printList(list);
    addFirst(list, 22);
    printList(list);
    return 0;
}

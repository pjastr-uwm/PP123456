#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * addFirst(struct element * list, int a){
    struct element * ptr = malloc(sizeof(struct element));
    ptr->x = a;
    ptr->next = list;
    return ptr;
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
    struct element * list = NULL;
    printList(list);
    list = addFirst(list, 6);
    printList(list);
    list = addFirst(list, -5);
    printList(list);
    list = addFirst(list, 8);
    printList(list);
    return 0;
}

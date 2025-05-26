#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printListWithHead(struct element * list){
    if (list->next == NULL){
        printf("Empty list\n---\n");
        return;
    }
    struct element * ptr =list->next;
    while(ptr != NULL){
        printf("%d\n", ptr->x);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    // pusta lista z glowa
    struct element * list1 = malloc(sizeof(struct element));
    list1->next = NULL;
    printListWithHead(list1);
    // lista dwuelementowa z glowa
    struct element * list2 = malloc(sizeof(struct element));
    list2->next = malloc(sizeof(struct element));
    list2->next->x = 4;
    list2->next->next = malloc(sizeof(struct element));
    list2->next->next->x = -3;
    list2->next->next->next = NULL;
    printListWithHead(list2);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printListWithoutHead(struct element * list){
    if (list == NULL){
        printf("Empty list\n---\n");
        return;
    }
    struct element * ptr =list;
    while(ptr != NULL){
        printf("%d\n", ptr->x);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    //pusta lista bez glowy
    struct element * list1 = NULL;
    printListWithoutHead(list1);
    // dlista o dwoch elementach
    struct element * list2 = malloc(sizeof(struct element));
    list2->x = 4;
    list2->next = malloc(sizeof(struct element));
    list2->next->x = -3;
    list2->next->next = NULL;
    printListWithoutHead(list2);
    return 0;
}

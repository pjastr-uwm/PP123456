#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};


struct element * addLast(struct element * list, int a){
    struct element * temp = malloc(sizeof(struct element));
    temp->x = a;
    temp->next = NULL;
    if(list == NULL){
        return temp;
    }
    struct element * ptr = list;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
    return list;
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
    list = addLast(list, 9);
    printList(list);
    list = addLast(list,-8);
    printList(list);
    list = addLast(list, 4);
    printList(list);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * createNoHead(){
    return NULL;
}

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
    struct element * list = createNoHead();
    printListWithoutHead(list);
    return 0;
}

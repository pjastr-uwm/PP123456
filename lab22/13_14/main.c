#include <stdio.h>
#include <stdlib.h>

struct Bike{
    char model[40];
    int distance_travelled;
};

int length(char txt[]){
    int i=0;
    while(txt[i]!=0){
        i++;
    }
    return i;
}

struct Bike * initBike(char model[], int distance_travelled){
    if (length(model) <3 || distance_travelled <=0){
        return NULL;
    }
    struct Bike *temp =malloc(sizeof(struct Bike));
    for(int i=0;i<length(model);i++){
        temp->model[i] = model[i];
    }
    temp->model[length(model)] = 0;
    temp->distance_travelled = distance_travelled;
    return temp;
};

void increaseDistance(struct Bike * p){
    p->distance_travelled +=500;
}

void showBike(struct Bike arg){
    printf("%s %d\n", arg.model, arg.distance_travelled);
}

int main()
{
    struct Bike * bike1 = initBike("Romet", 200);
    if (bike1 != NULL){
        showBike(*bike1);
        increaseDistance(bike1);
        showBike(*bike1);
    }
    return 0;
}

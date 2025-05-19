#include <stdio.h>
#include <stdlib.h>

struct Car{
    char brand[20];
    int mileage;
};

struct Car initCar (char brand[], int mileage){
    struct Car temp;
    temp.mileage = mileage;
    int i;
    for(i=0;brand[i] !=0;i++){
        temp.brand[i] = brand[i];
    }
    temp.brand[i] = 0;
    return temp;
}

void showCar(struct Car arg){
    printf("%s %d\n", arg.brand, arg.mileage);
}

void mileageService(struct Car * p){
    p->mileage +=10000;
}

int main()
{
    struct Car c1 = initCar("Skoda", 2000);
    showCar(c1);
    mileageService(&c1);
    showCar(c1);
    return 0;
}

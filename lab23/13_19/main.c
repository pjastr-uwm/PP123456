#include <stdio.h>
#include <stdlib.h>

union Number{
    int a;
    float b;
};

struct Data{
    int type; // 0-int, 1-float
    union Number num;
};

struct Data input(){
    struct Data temp;
    printf("Give info about type //0-int, 1-float\n");
    scanf("%d", &temp.type);
    if (temp.type ==0){
        printf("Give int\n");
        scanf("%d", &temp.num.a);
    }
    else{
        printf("Give float\n");
        scanf("%f", &temp.num.b);
    }
    return temp;
};

void show(struct Data arg){
    if (arg.type ==0){
        printf("int: %d\n", arg.num.a);
    }
    else{
        printf("float: %f\n", arg.num.b);
    }
}

int main()
{
    struct Data x = input();
    show(x);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct Student{
    char*firstName;
    char*lastName;
    int id;
    float gpa;
};

int main()
{
    struct Student s1 = {"AA","PL", 4, 5.6};
    struct Student s2 = {"jds","YU", 3, 2.4};
    struct Student s3 = {"TG","EN", 5, 3.4};
    //int tablica[] = {4,5,6};
    struct Student tab[] = {s1,s2,s3};
    for(int i=0;i<3;i++){
        printf("First and last name: %s %s, id: %d, gpa:%f.\n",
               tab[i].firstName, tab[i].lastName, tab[i].id, tab[i].gpa);
    }
    return 0;
}

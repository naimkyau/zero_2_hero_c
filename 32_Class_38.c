
// typedef (add an alies name)         struct student -> std

#include <stdio.h>
#include <string.h>

typedef struct student {
    int id;
    int marks;
    char name[30];
} std;

int main() {
    std s1;
    s1.id = 11;
    s1.marks = 75;
    strcpy(s1.name, "Naim");

    printf("Student 1 ID : %d\n", s1.id);
    printf("Student 1 Marks : %d\n",s1.marks);
    printf("Student 1 Name : %s\n",s1.name);

    // use typedef for pointer
    typedef int* intptr;
    intptr a, b;
    a = &s1.id;
    b = &s1.marks;

    printf("a \t= %d\n",a);
    printf("b \t= %d\n",b);

    return 0;
}
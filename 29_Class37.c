
// Structures

#include <stdio.h>
#include <string.h>

struct student {
    int id;
    int marks;
    char name[30];
};

int main() {
    struct student s1, s2;
    s1.id = 11;
    s1.marks = 75;
    strcpy(s1.name, "Naim");

    s2.id = 22;
    s2.marks = 68;
    strcpy(s2.name, "Siam");


    printf("Student 1 ID : %d\n", s1.id);
    printf("Student 1 Marks : %d\n",s1.marks);
    printf("Student 1 Name : %s\n",s1.name);
    printf("\n");
    printf("Student 2 ID : %d\n",s2.id);
    printf("Student 2 Marks : %d\n",s2.marks);
    printf("Student 2 Name : %s\n",s2.name);
    return 0;
}
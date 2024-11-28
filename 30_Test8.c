
// print all the information of a given student

#include <stdio.h>
#include <string.h>

struct student {
    int id;
    int marks;
    char name[30];
};

int main() {
    struct student s;
    printf("ID \t: ");
    scanf("%d", &s.id);
    printf("Marks \t: ");
    scanf("%d", &s.marks);
    getchar();
    printf("Name \t: ");
    gets(s.name);

    printf("Student 1 ID \t: %d\n", s.id);
    printf("Student 1 Marks\t: %d\n",s.marks);
    printf("Student 1 Name \t: %s\n",s.name);
    return 0;
}
/*
Suppose ABC is a private limited company which manages the employee records of other companies. Employee id can be of any length, and it can contain any character. The following are the task you have to perform for three employees.

Take the length of an employee id as an input and store it in an integer length variable
Take an employee id as an input and display it on the screen.
Save the employee id in a character array, which is allocated dynamically.
Create only one character array dynamically.
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
    int length;
    char *id;
    printf("Enter the length of the employee ID : ");
    scanf("%d",&length);
    getchar();
    id = (char*) malloc((length+1)*sizeof(char));

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the employee ID : ");
        fgets(id, sizeof(id), stdin);
        printf("%s\n",id);
        free(id);
    }
    return 0;
}
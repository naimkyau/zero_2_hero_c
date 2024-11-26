
// Pointer 

#include <stdio.h>

int main() {
    int a = 8;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    int *ptr3 = NULL;
    // printf("The value of a is : \t%d\n", *ptr1);
    // printf("The adderss of a is : \t%p\n", ptr1);
    // printf("The adderss of a is : \t%u\n", ptr2);
    printf("The adderss of a is : \t%p\n", ptr3);
    return 0;
}


// Memory Leak

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *arr[n]; 

    for (int i = 0; i < n; i++) {
        arr[i] = (int *)malloc(sizeof(int));  
        if (arr[i] == NULL) {
            printf("Memory allocation failed for index %d\n", i);
            return 1;
        }
        *arr[i] = (i + 1) * 10; 
        printf("Value at index %d: %d\n", i, *arr[i]);
    }

    for (int i = 0; i < n; i++) {
        free(arr[i]);  
        arr[i] = NULL; 

    printf("All memory freed successfully!\n");
    return 0;
}


// Arithmetic Operators
// Relational Operators
// logical operators
// Bitwise Operators
// Assignment Operators
// Miscellaneous Operators
// Operator Precedence
// Constant
// Format Specifier
// Constant
// Escape Sequences
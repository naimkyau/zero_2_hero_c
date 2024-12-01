
// Dynamic Memory Allocation 

#include <stdlib.h>
#include <stdio.h>

int main() {
    // // Use of malloc
    // int *ptr, n;
    // printf("Enter the size of the array you want to create : ");
    // scanf("%d",&n);
    // ptr = (int*) malloc(n*sizeof(int));
    // for (int i = 0; i < n; i++){
    //     printf("Enter the vaule of %d : ",i+1);
    //     scanf("%d",&ptr[i]);
    // }
    // printf("\n");
    // for (int i = 0; i < n; i++){
    //     printf("The value of %d is : %d\n", i+1, ptr[i]);
    // }
    // free(ptr);


    // Use of calloc
    int *ptr, n;
    printf("Enter the size of the array you want to create : ");
    scanf("%d",&n);
    ptr = (int*) calloc(n, sizeof(int));
    for (int i = 0; i < n; i++){
        printf("Enter the vaule of %d : ",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("The value of %d is : %d\n", i+1, ptr[i]);
    }
    // free(ptr);


    // Use of realloc
    // int *ptr, n;
    printf("Enter the new size of the array you want to create : ");
    scanf("%d",&n);
    ptr = (int*) realloc(ptr, n*sizeof(int));
    // for (int i = 0; i < n; i++){
    //     printf("Enter the vaule of %d : ",i+1);
    //     scanf("%d",&ptr[i]);
    // }
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("The value of %d is : %d\n", i+1, ptr[i]);
    }
    free(ptr);
    return 0;
}
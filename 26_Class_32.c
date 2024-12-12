
// Passing array to a function 

#include <stdio.h>

int func1(int arr[]){
    for (int i = 0; i < 4; i++){
        printf("The value of array [ %d ] is : %d\n", i,arr[i]);
        arr[i] *= 2;
    }
}
void func2(int *ptr){
    for (int i = 0; i < 4; i++){
        printf("The value of array [ %d ] is : %d\n", i, ptr[i]);
    }
}
void func3(int arr[2][3]){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int arr2[2][3] = {{44, 73, 84},{44, 73, 84}};
    int arr[] = {44, 73, 84, 32};
    func1(arr);
    printf("\n");
    func2(arr);
    printf("\n");
    func3(arr2);
    return 0;
}
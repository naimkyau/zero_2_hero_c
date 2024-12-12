/*
Your program should print the array before and after reversal.
For Example:
Before Reversal: 1, 2, 3, 4, 5, 6, 67
After Reversal: 67, 6, 5, 4, 3, 2, 1
*/
#include <stdio.h>

void printarr(int array[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ",array[i]);
    }
}

void printarr_rev(int array[], int n){
    for (int i = n-1; i >= 0; i--){
        printf("%d ",array[i]);
    }
}

int main() {
    int n;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    n = (sizeof(arr)/4);
    printarr(arr,n);
    printf("\n");
    printf("\n");
    printarr_rev(arr,n);
    
    return 0;
}
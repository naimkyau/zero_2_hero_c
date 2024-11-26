
// arrays

#include <stdio.h>

int main() {
    
    int age[3];
    age[0]=54;
    age[1]=38;
    age[2]=26;
    printf("%d\n",age[0]);
    printf("%d\n",age[1]);
    printf("%d\n",age[2]);
printf("\n");
    int marks[3] = {4, 3, 8};
    printf("%d\n",marks[0]);
    printf("%d\n",marks[1]);
    printf("%d\n",marks[2]);
printf("\n");
    int mark[3];
    for (int i = 0; i < 3; i++){
        printf("Enter mark %d : ",i+1);
        scanf("%d",&mark[i]);
    }
    for (int i = 0; i < 3; i++){
        printf("The mark is %d\n", mark[1]);
    }
    
                // 2D arrays

        // int arr[2][3] = {
        //     {1, 2, 3}, 
        //     {4, 5, 6}
        // };
        // int arr[2][3] = {1, 2, 3, 4, 5, 6};


    int ages[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("ages [%d][%d] : ", i+1, j+1);
            scanf("%d",&ages[i][j]);
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ",ages[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
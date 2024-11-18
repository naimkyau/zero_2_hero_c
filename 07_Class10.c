#include <stdio.h>

int main() {
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Your age : %d\n",age);
    if (age >= 18){
        printf("You can vote !\n");
    }
    else if (age >= 10)
    {
        printf("You can vote to school !\n");
    }
    
    else{
        printf("You can't vote !\n");
    }
    return 0;
}
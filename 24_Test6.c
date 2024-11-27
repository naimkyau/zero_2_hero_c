/* Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern
Then print the pattern accordingly
*
**
***-> Triangular star pattern

***
**
* -> Reversed triangular star pattern

*/
#include <stdio.h>
int main()
{
    int a, n;
    printf("Choose \" 0 \" for triangular star pattern\nChoose \" 1 \"for reversed triangular star pattern\nEnter : ");
    scanf("%d",&a);
    switch (a)
    {
    case 0:
        printf("Line of triangular star pattern : ");
        scanf("%d",&n);
        for (int i = 0; i < n; i++){
            for (int j = 0; j <= i; j++){
                printf("*");
            }
            printf("\n");
        }
        break;
    case 1:
        printf("Line of reversed triangular star pattern : ");
        scanf("%d",&n);
        for (int i = n; i > 0; i--){
        // for (int i = 0; i < n; i++){
            for (int j = 0; j < i; j++){
            // for (int j = 0; j <= (n-i-1); j++){
                printf("*");
            }
            printf("\n");
        }
        break;
    
    default:
        printf("Invalid Input !\n");
        break;
    }

    return 0;
}



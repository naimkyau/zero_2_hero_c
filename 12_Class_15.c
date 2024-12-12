
// For loop

#include <stdio.h>

int main()
{
    int i = 0, n;

    printf("Enter the number : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", i);
    }
    printf("\n");
    for (int i = 0, j = 0; i < 5; i++, j++)
    {
        printf("%d %d\n", i, j);
    }
    return 0;
}
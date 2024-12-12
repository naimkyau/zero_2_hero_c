
// While loop

#include <stdio.h>

int main()
{
    int i = 0, n;

    printf("Enter the number : ");
    scanf("%d", &n);
    while (i < n)
    {
        i++;
        printf("%d\n", i);
    }

    return 0;
}
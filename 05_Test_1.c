#include <stdio.h>
// Print multiplication table of a number enter by the user
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d  X  %d  =  %d\n", n, i, i * n);
    }
    return 0;
}
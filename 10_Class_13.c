
// Do While loop

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : \n");
    scanf("%d", &num);
    int i = 0;
    do
    {
        i++;
        printf("%d\n", i);
    } while (i < num);
    return 0;
}
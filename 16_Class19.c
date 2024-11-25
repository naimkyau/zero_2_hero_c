
// Function

#include <stdio.h>

int sum(int a, int b)       // with argument & with return value
{ 
    int sum = a + b;
    return sum;
}
void printstar(int n)       // with argument & without return value
{ 
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
}
int takenum()               // without argument & with return value
{ 
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    return a;
}

int main()
{
    int a = 2, b = 3, c;
    sum(a, b);
    printf("Sum = %d\n", sum(a, b));
    // Both are same
    // c = sum(a, b);
    // printf("Sum = %d\n", c);

    int n = 5;
    printstar(n);

    int d = takenum();
    printf("num is : %d\n", d);

    return 0;
}

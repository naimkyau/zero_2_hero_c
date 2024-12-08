#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    int ra, ca, rb, cb;

    printf("\nEnter the number of rows and columns of matrix a [e.g., 2 3]: ");
    scanf("%d %d", &ra, &ca);
    printf("a [%d %d]\n", ra, ca);

    printf("Enter the number of rows and columns of matrix b [e.g., 2 3]: ");
    scanf("%d %d", &rb, &cb);
    printf("b [%d %d]\n", rb, cb);

    int a[ra][ca], b[rb][cb], m[ra][cb];

    if (ca != rb)
    {
        printf("!!! Matrix multiplication not possible !!!\nColumns of a (%d) must equal rows of b (%d).\n", ca, rb);
        return 1;
    }

    // Input matrix a
    printf("Enter elements of matrix a\n");
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < ca; j++)
        {
            printf("r%d c%d : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    // Output matrix a
    printf("Matrix a : \n");
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < ca; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Input matrix b
    printf("Enter elements of matrix b\n");
    for (int i = 0; i < rb; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            printf("r%d c%d : ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    // Output matrix b
    printf("Matrix b:\n");
    for (int i = 0; i < rb; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    //          Matrix multiplication: m[ra][cb] = a[ra][ca] * b[rb][cb]
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            int sum = 0;
            for (int k = 0; k < ca; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            m[i][j] = sum;
        }
    }

    // Output of m
    printf("\nMultiplication of matrix (a x b):\n");
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
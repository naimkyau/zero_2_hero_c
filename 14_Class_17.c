
// goto statement

#include <stdio.h>

int main()
{
    int i, j, n = 5;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (i == n)
            {
                goto end;
            }
            printf("i = %d, j = %d\n", i, j);
        }
    }

end:
    printf("Exited the loops.\n");
    return 0;
}

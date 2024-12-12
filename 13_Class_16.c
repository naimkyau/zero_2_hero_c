
//  contenue statement
// break statement

#include <stdio.h>

int main()
{
    // break statement
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);
    }
    int day = 3;
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid day\n");
    }

    //  contenue statement
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}


// Switch

#include <stdio.h>

int main()
{
    int age, marriage;
    printf("Enter Your your age : ");
    scanf("%d", &age);

    switch (age)
    {
    case 10:
        printf("Your age is 10\n");
        break;

    case 20:
        printf("Your age is 20\n");
        printf("\n");
        printf("If married enter \"1\"\n");
        printf("marriage statement : ");
        scanf("%d", &marriage);
        switch (marriage)
        {
        case 1:
            printf("You are married\n");
            break;

        default:
            printf("You are not married\n");
        }
        break;

    case 30:
        printf("Your age is 30\n");
        break;

    default:
        printf("Your age is not 10, 20 or 30 \n");
        break;
    }
    return 0;
}
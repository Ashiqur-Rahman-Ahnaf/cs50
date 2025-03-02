#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num;

    do
    {
        num = get_int("Enter a number: ");
    }
    while (num < 0);

    int n = num;
    int n1 = 0;

    for (int a = num; a > 0; a--)
    {
        n--;
        n1++;

        for (int b = 0; b < n; b++)
        {
            printf(" ");
        }

        for (int c = 0; c < n1; c++)
        {
            printf("#");
        }

        printf("\n");
    }
    return 0;
}
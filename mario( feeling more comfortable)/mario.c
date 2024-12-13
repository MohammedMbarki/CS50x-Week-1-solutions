#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int H;
    do
    {
        H = get_int("Height: ");
    }

    while (H < 1 || H > 52);

    for (int line = 0 ; line < H ; line++)
    {
        for (int space = H -1 ; space > line; space--)
        {
            printf("  ");
        }
        for (int LB = 0; LB <= line; LB++)
        {
            printf("#");
        }
        printf(" ");

        for (int RB = 0; RB <= line; RB++)
        {
            printf("#");
        }
         printf("\n");
    }
}

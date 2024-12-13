# Problem to Solve
<p>Toward the beginning of World 1-1 in Nintendo’s Super Mario Brothers, Mario must hop over adjacent pyramids of blocks, per the below.</p>

![pyramids](https://github.com/user-attachments/assets/674e5b79-6507-41bb-b8eb-e452e9287085)

<p>In a file called mario.c in a folder called mario-more, implement a program in C that recreates that pyramid, using hashes (#) for bricks, as in the below:</p>

``` bach

   #  #
  ##  ##
 ###  ###
####  ####

```
<p>And let’s allow the user to decide just how tall the pyramids should be by first prompting them for a positive int between, say, 1 and 8, inclusive.</p>


# SRC

```c
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

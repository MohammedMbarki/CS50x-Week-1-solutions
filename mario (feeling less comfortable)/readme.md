# Problem to Solve
<p>Toward the end of World 1-1 in Nintendo’s Super Mario Bros., Mario must ascend right-aligned pyramid of bricks, as in the below.</p>



![pyramid](https://github.com/user-attachments/assets/6276902a-9fe8-4c43-8f1e-26775f0637e9)


demo 


```bach
$ make mario                                                                    
$ ./mario                                                                       
Height: 8                                                                       
       #                                                                        
      ##                                                                        
     ###                                                                        
    ####                                                                        
   #####                                                                        
  ######                                                                        
 #######                                                                        
########                                                                        
$  
````




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
            printf(" ");
        }
        for (int block = 0; block <= line; block++)
        {
            printf("#");
        }
         printf("\n");
    }
}



#include <stdio.h>

int main(void)
{
    int x = 10;
    printf("Hello, World!\n");
    for (int i = 0; i < 5; i++) {
        printf("This is line %d\n", i + 1);
        if (x > 5) {
         printf("x is greater than 5.");
        } else if (x == 5) {
            printf("Congrats! x is now equal to 5. :)");
        } else {
               printf("x is less then LELELELE");
        }
    }
    return 0;
}

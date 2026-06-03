#include <stdio.h>
#include "arith.h"

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
double divide(int x, int y);

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
    printf("%d + %d = %d\n", 3, 2, add(3,2));
    printf("%d - %d = %d\n", 3, 2, subtract(3,2));
    return 0;

    printf("You were hacked by Joshua and Aviva! :)");
}

// A program to print the full pyramid pattern of stars

#include <stdio.h>

int main()
{
    int rows = 5;

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < 2 * (rows - i) - 1; j--) {
            printf(" ");
        }

        for (int k = 0; k < 2 * i + 1; k++) {
            printf("");
        }
        printf("*");
        printf("\t");
    }

    printf("%d \n", rows);

    return 0;
}
/* The output should be like this
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
*/      
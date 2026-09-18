#include <stdio.h>

int main(void) {
    int compteur = 5;
    int i = 0;

    while (i < compteur) {
        int j = 0;
        while (j <= i) {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

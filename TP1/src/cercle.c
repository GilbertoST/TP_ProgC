#include <stdio.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(void) {
    double rayon = 6.0;
    double aire = M_PI * rayon * rayon;
    double perimetre = 2.0 * M_PI * rayon;

    printf("L'aire du cercle = %.2f\n", aire);
    printf("Le périmètre du cercle = %.2f\n", perimetre);
    return 0;
}

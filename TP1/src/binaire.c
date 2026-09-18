#include <stdio.h>

void afficher_binaire(int valeur) {
    unsigned int nombre = (unsigned int)valeur;
    int bits = sizeof(int) * 8;

    for (int i = bits - 1; i >= 0; --i) {
        printf("%d", (nombre >> i) & 1U);
    }
    printf("\n");
}

int main(void) {
    int valeurs[] = {0, 4096, 65536, 65535, 1024};
    int nombre_de_valeurs = sizeof(valeurs) / sizeof(valeurs[0]);

    for (int i = 0; i < nombre_de_valeurs; ++i) {
        printf("%d -> ", valeurs[i]);
        afficher_binaire(valeurs[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int a, b;

    // Équivalent de a = int(input())
    scanf("%d", &a);

    // Équivalent de b = int(input())
    scanf("%d", &b);

    // Équivalents de print()
    printf("Somme : %d\n", a + b);
    printf("Différence : %d\n", a - b);
    printf("Division entière : %d\n", a / b);  // Attention, la division de 2 entiers en C est entière (ex: 5/2 = 2)
    printf("Modulo : %d\n", a % b);

    return 0;
}
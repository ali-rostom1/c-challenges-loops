#include <stdio.h>
#include <stdlib.h>

int main() {
    int nb;
    printf("Veuillez saisir votre nombre: ");
    
    while (scanf("%d", &nb) != 1 || nb < 0) {
        printf("Veuillez saisir un nombre entier positif !! : ");
        while (getchar() != '\n');
    }

    if (nb == 0) {
        printf("%d! = 1\n", nb);
        return 0;
    }

    long long res = 1;

    for (int i = 1; i <= nb; i++) {
        res *= i;
    }

    printf("%d! = %lld\n", nb, res);

    return 0;
}
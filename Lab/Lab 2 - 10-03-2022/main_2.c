#include <stdio.h>

#define LEN 10

int main() {

    int vettore[LEN] = {0};
    float media = 0;
    int max, indice;

    printf("Inserire 10 numeri interi... \n");
    for (int i = 0; i < LEN; i++) {
        scanf("%d", &vettore[i]);
        media += vettore[i];
    }

    media = media/LEN;

    printf("[");
    for (int j = 0; j < LEN; j++) {
        printf("%d", vettore[j]);
        if (j != LEN) {
            printf(", ");
        }
    }
    printf("] \n");

    printf("La media dei valori del vettore e' %.3f \n", media);

    max = vettore[0];
    for (int k = 0; k < LEN; k++) {
        if (vettore[k] > max) {
            max = vettore[k];
            indice = k;
        }
    }

    printf("Il valore massimo e' %d e si trova all indice %d", max, indice);

    return 0;
}
// Acquisisce 10 interi e ne calcola max e min

#include <stdio.h>

#define LEN 10

int main() {

    int vettore[LEN] = {0};

    printf("Inserire 10 numeri interi... \n");
    for (int i = 0; i < LEN; i++) {
        scanf("%d", &vettore[i]);
    }

    int min, max = vettore[0];

    for (int j = 0; j < LEN; j++) {
        if (vettore[j] > max) {
            max = vettore[j];
        }
        if (vettore[j] < min) {
            min = vettore[j];
        }
    }

    printf("Valore massimo = %d, valore minimo = %d", max, min);

    return 0;
}
#include <stdio.h>

#define LEN 10

int main() {

    int vettore[LEN] = {0};
    int media = 0;

    printf("Inserire 10 numeri interi... \n");
    for (int i = 0; i < LEN; i++) {
        scanf("%d", &vettore[i]);
        media += vettore[i];
    }

    media = media/LEN;

    for (int k = 0; k < LEN; k++) {
        if (vettore[k] > media) {
            printf("Il valore %d e' superiore alla media (%d)... \n", vettore[k], media);
        } else if (vettore[k] == media) {
            printf("Il valore %d e' uguale alla media (%d)... \n", vettore[k], media);
        } else if (vettore[k] < media) {
            printf("Il valore %d e' inferiore alla media (%d)... \n", vettore[k], media);
        }
    }

    return 0;
}
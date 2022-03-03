#include <stdio.h>

int main() {
    int a, b, c, d, error;
    printf("Inserire quattro numeri compresi nell'intervallo [0; 1000) separati da uno spazio... \n");
    error = scanf("%d %d %d %d", &a, &b, &c, &d);
    if (error == 4) {

        if (a < 0 || a >= 1000) {
            a = 0;
            printf("Problema con il parametro a..., impostato a zero... \n");
        }
        if (b < 0 || b >= 1000) {
            b = 0;
            printf("Problema con il parametro b..., impostato a zero... \n");
        }
        if (c < 0 || c >= 1000) {
            c = 0;
            printf("Problema con il parametro c..., impostato a zero... \n");
        }
        if (d < 0 || d >= 1000) {
            d = 0;
            printf("Problema con il parametro d..., impostato a zero... \n");
        }

        // da finire...     

    } else {
        printf("Errore di digitazione... ");
    }
    return 0;
}
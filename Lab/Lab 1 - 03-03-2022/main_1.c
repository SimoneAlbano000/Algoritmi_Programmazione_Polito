#include <stdio.h>

// eq = ax + bcx + dK = 0
// (a + bc)x = - dK
// x = -dK / (a + bc)

#define K 50
int a, b, c, d, error;
float x;

int main() {
    printf("Inserire i valori delle variabili a, b, c, d, separate da uno spazio... \n");
    error = scanf("%d %d %d %d", &a, &b, &c, &d);
    if (error == 4) {
        x = (float) (-d*K / (a + b*c));
        printf("La soluzione dell' equazione e' x = %f \n", x);
    } else {
        printf("Errore di digitazione... \n");
    }
    
    return 0;
}
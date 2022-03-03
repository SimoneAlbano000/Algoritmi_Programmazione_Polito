#include <stdio.h>

int main() {
    int error;
    float a, b, media;
    printf("Inseire i due valori separati da spazio... \n");
    error = scanf("%f %f", &a, &b);
    if (error = 2) {
        media = ((a + b) / 2);
        printf("Media: %.2f", media);
    } else {
        printf("Errore di digitazione...");
    }
    return 0;
}
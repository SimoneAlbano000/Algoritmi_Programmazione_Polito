#include <stdio.h>

int main() {

    int val;
    int guess = 0;
    int upperBound = 100;
    int lowerBound = 0;

    printf("Inserisci un numero intero tra 0 e 100... \n");
    scanf("%d", &val);

    do {
        if (val >= (upperBound+lowerBound)/2) {
            lowerBound = (upperBound+lowerBound)/2;
        } else {
            upperBound = (upperBound+lowerBound)/2;
        }
        guess = (upperBound+lowerBound)/2;
        printf("Tentativo: %d\n", guess);
    } while (val != guess);

    printf("Il numero inseriro e' %d", guess);

    return 0;
}
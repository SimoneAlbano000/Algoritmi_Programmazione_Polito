// Semplice calcolatrice

#include <stdio.h>

int main() {
    int var1, var2;
    char char1;
    printf("Inserisci due interi e un carattere aritmetico nel seguente ordine: int|char|int \n");
    int error = scanf("%d %c %d", &var1, &char1, &var2);
    if (error == 3) {
        if (char1 == '+') {
            printf("Risultato: %d", var1 + var2);
        } else if (char1 == '-') {
            printf("Risultato: %d", var1 - var2);
        } else if (char1 == '*') {
            printf("Risultato: %d", var1 * var2);
        } else if (char1 == '/') {
            printf("Risultato: %.3f", (float) var1 / var2);
        }
    } else {
        printf("Errore di digitazione...");
    }
    
    return 0;
}
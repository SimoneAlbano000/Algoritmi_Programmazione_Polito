// Esercizio

#include <stdio.h>
#include <string.h>

int isPrime(int);
int char2uint(char*, int);
int isTrncRight(char*);

int main() {
    char num[] = "";

    printf("Inserire un numero... \n");
    scanf("%s", num);
    if (isTrncRight(num) == 1) {
        printf("Il numero %s e' troncabile con primi a destra... \n", num);
    } else {
        printf("Il numero %s non e' troncabile con primi a destra... \n", num);
    }
    return 0;
}

int isPrime(int a) {
    int counter = 0;
    for (int i = 1; i <= (a/2); i++) {
        if (a % i == 0) {
            counter++;
        }
    }
    if (counter > 2) {
        return 0;
    } else {
        return 1;
    }
}

int char2uint(char *a, int digit) {
    // Controllo anti overflow
    if (digit < 1 || digit > strlen(a)) {
        printf("char2uint error - (int digit) out of boundaries");
        return -1;
    }
    // Ofset da sottrarre per ottenere il valore intero corrispondente
    const int ASCII_OFSET = 48;
    int exp = 1;
    int val = 0;
    for (int i = 0; i < digit; i++) {
        // Calcola l'esponente
        for (int k = 0; k < i; k++) {
            exp *= 10;
        }
        // Aggiunge il valore di unita', decine, centinaia, etc...
        val += ((((int)(a[strlen(a) - i - 1])) - ASCII_OFSET)*exp);
        exp = 1;
    }
    return val;
}

int isTrncRight(char *a) {
    int counter = 0;
    for (int i = 1; i <= strlen(a); i++) {
        if (isPrime(char2uint(a, i)) == 1) {
            counter++;
        }
    }
    if (counter == strlen(a)) {
        return 1;
    } else {
        return 0;
    }
}

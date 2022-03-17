// DNA finder

#include <stdio.h>
#include <string.h>

#define LEN 100

int main() {

    char sequenza_genetica[LEN] = {0};
    char sequenza_utente[4] = {0};
    int occorrenze = 0;

    printf("Inserire una sequenza di DNA, (Max 100 caratteri), -1 per interrompere... \n");
    for (int i = 0; i < LEN; i++) {
        scanf("%c", &sequenza_genetica[i]);
        if ((int)sequenza_genetica[i] == -1) {
            break;
        }
    }
    printf("Inserire la sequenza di DNA da cercare (4 caratteri)...");
    for (int j = 0; j < 4; j++) {
        scanf("%c", &sequenza_utente[j]);
    }

    for (int k = 0; k < LEN - 4; k++) {
        if (sequenza_genetica[k] == sequenza_utente[k] && 
        sequenza_genetica[k+1] == sequenza_utente[k+1] && 
        sequenza_genetica[k+2] == sequenza_utente[k+2] && 
        sequenza_genetica[k+3] == sequenza_utente[k+3]) {
            occorrenze++;
        }
    }

    printf("Occorrenze: %d", occorrenze);

    return 0;
}
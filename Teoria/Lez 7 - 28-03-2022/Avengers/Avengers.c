#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define dimensione_mappa 10
#define tempo_x_mossa 20
#define tempo_max_sec 3600 // 1 ora

// Prototipi funzioni
char scegli_direzione();

int main() {

    // Inizializza lo pseudo-random-number-generator
    srand((unsigned)time(NULL));

    // Variabili principali:
    char nome_file[] = "mappa.dat";
    char mappa[dimensione_mappa][dimensione_mappa] = {0};
    int contatore_tempo = 0;

    // Acquisisci mappa da file -------------------------
    FILE *file_mappa;
    file_mappa = fopen(nome_file, "r");

    char dato;
    int i = 0;
    int j = 0;

    while (!feof(file_mappa)) {
        fscanf(file_mappa, "%c", &dato);
        if (dato != '\n') {
            mappa[i][j] = dato;
            j++;
        } else {
            i++;
            j = 0;
        }
    }
    fclose(file_mappa);
    // ---------------------------------------------------

    // Inizio del gioco - 2 giocatori

    while (contatore_tempo < tempo_max_sec) {
        
    }
    printf("MISSIONE FALLITA! \n");

    return 0;
}

char scegli_direzione() {
    int numero_casuale = (rand() % 11);
    if (numero_casuale == 0 || numero_casuale == 1) {
        return 'S'; // South
    } else if (numero_casuale >= 2 && numero_casuale <= 6) {
        return 'N'; // North
    } else if (numero_casuale == 7) {
        return 'E'; // Est
    } else if (numero_casuale >= 8 && numero_casuale <= 10) {
        return 'W'; // West
    }
}

/*
    for (i = 0; i < dimensione_mappa; i++) {
        for (j = 0; j < dimensione_mappa; j++) {
            printf("%c", mappa[i][j]);
        }
        printf("\n");
    }
*/

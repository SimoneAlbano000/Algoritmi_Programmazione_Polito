#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome_file[10];
    int n_pazienti = 0;

    char nome_temp[100];
    char cognome_temp[100];

    int j = 0;
    int len = 0;
    int scelta = 0;

    typedef struct {
        char* nome;
        char* cognome;
        int visita_fatta;
    } paziente;

    // Creo il puntatore per il vettore di strutture;
    paziente* vett_pazienti;

    printf("Inserire il nome del file contenete i pazienti da visitare (gg-mm-aa)... \n");
    scanf("%s", nome_file);

    // Apro il File
    FILE* file_pazienti;
    file_pazienti = fopen(strcat(nome_file, ".dat"), "r");
    if (file_pazienti == NULL) {
        printf("Errore nell'apertura del file... \n");
        exit(1);
    }

    // Leggo la prima riga, il numero di pazienti
    fscanf(file_pazienti, "%d", &n_pazienti);
    vett_pazienti = (paziente*) malloc(n_pazienti*sizeof(paziente));
    
    // Riempio le strutture
    for (int i = 0; i < n_pazienti; i++) {

        // Leggo una riga dal file
        fscanf(file_pazienti, "%s %s %*s", nome_temp, cognome_temp);

        len = strlen(nome_temp);
        vett_pazienti[i].nome = (char*) malloc((len + 1)*sizeof(char));
        strcpy(vett_pazienti[i].nome, nome_temp);

        len = strlen(cognome_temp);
        vett_pazienti[i].cognome = (char*) malloc((len + 1)*sizeof(char));
        strcpy(vett_pazienti[i].cognome, cognome_temp);

        vett_pazienti[i].visita_fatta = 0;
    }

    fclose(file_pazienti);

    printf(
        "1 Prossimo assistito da visitare... \n"
        "2 Rimuovere un assistito dalla lista... \n"
        "3 Stampare gli assistiti del giorno... \n"
        "4 Uscire dal programma... \n"
    );

    scanf("%d", &scelta);

    while (scelta != 4) {

        switch (scelta) {
        case 1:
            while (1) {
                if (vett_pazienti[j].visita_fatta == 0) {
                    printf("Il prossimo paziente da visitare e' %s %s... \n", vett_pazienti[j].nome, vett_pazienti[j].cognome);
                    vett_pazienti[j].visita_fatta = 1;
                    break;
                } else if (j > n_pazienti) {
                printf("Non ci sono pazienti da visitare oggi... \n");
                break;
                }
                // Flaggo il paziente come visitato
                j++;
            } 
        break;

        case 2:
        
        break;

        case 3:
            // Stampa il vetotre di struct
            for (int i = 0; i < n_pazienti; i++) {
                printf("%s %s %d", vett_pazienti[i].nome, vett_pazienti[i].cognome, vett_pazienti[i].visita_fatta);
                printf("\n");
            }
        break;

        case 4:
            exit(1);
        break;

        default:
            break;
        }

        printf(
        "1 Prossimo assistito da visitare... \n"
        "2 Rimuovere un assistito dalla lista... \n"
        "3 Stampare gli assistiti del giorno... \n"
        "4 Uscire dal programma... \n"
        );
        scanf("%d", &scelta);
    }

    return 0;
}
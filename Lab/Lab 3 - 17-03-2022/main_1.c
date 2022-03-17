// Encrypt/Decrypt

#include <stdio.h>
#include <string.h>

int main() {
    int scelta;
    int key[4] = {0};
    char input[100] = "";
    char output[100] = "";

    printf("Per cifrare del testo inserire 0, per decifrare del testo inserire 1... \n");
    scanf("%d", &scelta);
    // getchar() molto importante perche' la funzione fgets ha la mamma pu***** e legge il carattere \n lasciato nel buffer dalla funzione scanf()
    getchar();

    switch (scelta) {
    case 0: // cifrare
        printf("Inserire il testo da cifrare... \n");
        fgets(input, 100, stdin);

        printf("Inserire la chiave di cifratura (4 interi compresi tra 0 e 26)... \n");
        for (int i = 0; i < 4; i++) {
            scanf("%d", &key[i]);
            if (key[i] < 0 || key[i] > 26) {
                printf("Chiave non valida... \n");
                break;
            }
        }
        for (int j = 0; j < strlen(input); j++) {
            if (input[j] != ' ') {
                output[j] = (char)((int)input[j] + key[j%4]);
            } else {
                output[j] = ' ';
            } 
        }
        printf("%s", output);
        break;
    // ------------------------------------------------
    case 1: // decifrare
        printf("Inserire il testo da decifrare... \n");
        fgets(input, 100, stdin);

        printf("Inserire la chiave di cifratura (4 interi compresi tra 0 e 26)... \n");
        for (int i = 0; i < 4; i++) {
            scanf("%d", &key[i]);
            if (key[i] < 0 || key[i] > 26) {
                printf("Chiave non valida... \n");
                break;
            }
        }
        for (int j = 0; j < strlen(input); j++) {
            if (input[j] != ' ') {
                output[j] = (char)((int)input[j] - key[j%4]);
            } else {
                output[j] = ' ';
            } 
        }
        printf("%s", output);
        break;
    default:
        printf("Scelta non valida!... \n");
        break;
    }
    return 0;
}
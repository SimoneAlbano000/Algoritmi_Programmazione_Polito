#include <stdio.h>

#define prezzoBase 100
#define prezzoCaratteristiche 40
#define mesiVechhioProprietario 20

int prezzo, caratteristiche, mesi, anni, errori;

int main() {

    printf("Inserire le caratteristiche del cellulare ed il numero di anni... \n");
    errori = scanf("%d %d", &caratteristiche, &anni);
    if (errori == 2) {
        prezzo = (prezzoBase + prezzoCaratteristiche*caratteristiche - mesiVechhioProprietario*anni*12);
        if (prezzo < 100) {
            prezzo = 100;
        }
        printf("Il cellulare costa: %d", prezzo);
    } else {
        printf("Errore di digitazione... \n");
    }
    return 0;
}
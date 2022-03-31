// Strutture

// Possibilità di creare strutture di dati
// composte dal altri dati, aggregandole in una losa variabile
// Le strutture sono eterogenee (puo' contenere dati diversi)

#include <stdio.h>

int main() {

    struct persona {
        char* nome;
        char* cognome;
        int anni;
    };

    // Dichiaro una variabile chiamata simone di tipo persona
    struct persona simone;

    simone.nome = "Simone";
    simone.cognome = "Albano";
    simone.anni = 19;

    printf("%s, %s, %d", simone.nome, simone.cognome, simone.anni);

    return 0;

    // Altro modo di dichiarare una struttura
    /*

    typedef struct {
        char* nome;
        char* cognome;
        int anni;
    } persona;

    persona simone;

    simone.nome = "Simone";
    simone.cognome = "Albano";
    simone.anni = 19;

    */
}
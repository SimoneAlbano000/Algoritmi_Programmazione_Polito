// Strutture

// Possibilità di creare strutture di dati
// composte dal altri dati, aggregandole in una losa variabile
// Le strutture sono eterogenee (puo' contenere dati diversi)

// typedef mi permette di creare nuovi tipi di variabili personalizzate
// typedef unsigned int bit8
// creo un nuovo tipo di variabile chiamato bit8

#include <stdio.h>
#include <stdlib.h>

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

    // Oppure simone = {"Simone", "Albano", 19}

    printf("%s, %s, %d", simone.nome, simone.cognome, simone.anni);

    return 0;

    // Altro modo di dichiarare una struttura (piu' bello)
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
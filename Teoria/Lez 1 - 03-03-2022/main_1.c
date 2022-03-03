// Lezione 1

// Inclusione delle librerie standard
#include <stdio.h>

// Libreria per la classificazione delle stringhe
#include <ctype.h>
/*
    Funzioni della libreria:
        isalnum(char);
        isalpha(char);
        isascii(char);
        isdigit(char);
        is lower/upper(char);
        isspace(char);
        to upper/lower();
*/

// Libreria per la gestione della dimensione delle variabili intere
#include <stdint.h>
/*
    tipi:
        int8/16/32/64_t
        uint8/16/32/64_t
    Queste sono le lunghezze standard ma possono essere create variabili intere di qualsiasi lunghezza.
*/

// Intero a 64 bit in two's complement
int varGlobal = 10;
char carattere = 'c';

int main() {

    // formattare valori nella printf:
        /*
            %d -> int
            %u -> unsigned int
            %c -> carattere
            %x -> esadecimale
            %s -> stringa
            %f -> float single precision
            %g -> float double precision (double)
        */

    printf("Hello World!\n");
    printf("Variabile glole numerica %d, Variabile globale carattere %c\n", varGlobal, carattere);

    // -----------------------------------------------------------------------------------------------

    // Acquisire input da tastiera... Il dato viene acquisito come intero. (solo singolo carattere!)
    printf("Premere un tasto...");
    char inputTastiera = getchar();
    
    if (isalpha(inputTastiera)) {
        printf("%c\n", inputTastiera); // Stampa il tasto premuto come intero secondo la tabella ASCII
        printf("Il carattere inserito e' alfabetico...\n");
    } else if (isdigit(inputTastiera)) {
        printf("%c\n", inputTastiera); // Stampa il tasto premuto come carattere
        printf("Il carattere inserito e' un numero...\n");
    }

    // -----------------------------------------------------------------------------------------------
    
    // Metodo piu' avanzato: scanf();
    // scanf("Tipo di dato da acquisire", indirizzo di memoria della variabile di destinazione);
    // Il simbolo & davanti ad una variabile indica la posizione in memoria di tale variabile -> puntatore
    scanf("%d", &inputTastiera);

    // La funzione scanf, restituisce il numero di valori letti correttamente,
    // in questo modo si puo' capire se tutti i dati sono stati letti correttamente.

    // Puo' essere indicato alla funzione scanf di scartare un valore:
        char carattere;
        scanf("%*d %c", &inputTastiera, &carattere);

    // -----------------------------------------------------------------------------------------------

    // Direttiva define:

    #define Pi 3.1415
    const float pi = 3.1415;

    // Nell'utilizzo pratico la differenza tra queste due scritture e' inesistente,
    // ma in realta' la direttiva #define dice al compilatore di sostituire tutte le occorrenze di Pi
    // nel codice stesso con il valore 3.1415. La seconda scittura invece crea in memoria una variabile read-only.
    // L'effetto e' il medesimo ma la direttiva #define permette di risparmiare spazio in ram, in particolar modo nei sistemi embedded. 

    // -----------------------------------------------------------------------------------------------

    // Direttive di cast:
    // In C i tipi di dati sono legati alle variabili e non al loro contenuto.
    // Per questo motivo un operazione tra due valori interi restituira' sempre un risultato intero,
    // anche se la variabile di destinazione e' un floating point. Per ovviare a questo problema si puo' rendere uno dei
    // due operandi temporaneamente floating point in modo da forzare la CPU ad allocare il calcolo alla FPU e restituire un 
    // risultato floating point.

    // (int), (float), (char) etc...

    // Restituisci 0
    return 0;
}
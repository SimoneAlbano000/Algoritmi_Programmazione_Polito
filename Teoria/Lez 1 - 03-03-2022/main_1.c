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

    // Restituisci 0
    return 0;
}
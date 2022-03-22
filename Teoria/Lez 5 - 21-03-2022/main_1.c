// Funzioni e sottoprogrammi

#include <stdio.h>

// In questo caso alla funzione vengono passati i valori delle variabili a e b, 
// di conseguenza le variabili originali non vengono toccate in alcun modo!!
// --------------------------------------
// Prototipo della funzione.
int sum(int, int);
void swap(int*, int*);

int main() {
    int a, b;
    a = 6;
    b = 4;
    printf("%d \n", sum(a, b));
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}

// Dichiarazione della funzione.
int sum(int a, int b) {
    return a + b;
}
// ----------------------------------------

// Ma possiamo anche creare delle funzioni alle quali passare l'indirizzo di memoria
// delle variabili originali, e di conseguenza operare direttamente su di esse.

// La funzione prende in ingresso le locazioni di memoria delle due variabili
// La variabile di tipo puntatore si dichiara con prototipo *
void swap(int *a, int *b) { 
    
    // quando utilizzo un puntatore:
    // a --> si riferisce al contenuto del puntatore, ovvero la locazione di memoria
    // *a --> si riferisce al valore a cui punta la locazione di memoria a lui assegnata
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}
// Allocazione statica/dinamica della memoria

#include <stdio.h>
#include <stdlib.h>

// Istruzione per allocare della memoria
// void* malloc(int n_di_byte_da_allocare);
// Ritorna un puntatore GENERICO!! al primo indirizzo di memoria allocato
// Se da errore, ritorna NULL

// Quando assegno il puntatore void* ritornato da malloc()
// devo fare un cast per dire al compilatore la dimensione del dato puntato dal puntatore

// int* puntatore;
// puntatore = (int*)malloc(n_byte);

// Per facilitare l'allocazione di n elementi di k dimensione posso usare la funzione sizeof() per fare la moltiplicazione in automatico
// puntatore = (int*)malloc(n_elementi * sizeof(int)) 

int main() {
    return 0;
}
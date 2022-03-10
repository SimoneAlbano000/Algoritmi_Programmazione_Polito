#include <stdio.h>
#define N 3

// Vettori

int main() {

    // Creazione di un vettore di interi di lunghezza 10 elementi
    // E' importante inizializzare ad un valore iniziale una variabile se
    // essa verra' letta prima ancora di essere scritta, poiche' il vettore
    // potrebbe essere allocato in una porzione di memoria nella quale sono presenti
    // valori casuali, e non necessariamente vuota (tutti zeri)
    int vettore[N] = {0};

    // Rappresentazione in memoria:

    /*

    Indirizzo Mem   Cella Memoria
    0x00            | vettore[0] = 0 |
    0x01            | vettore[1] = 0 |
    0x02            | vettore[2] = 0 |
    .               |     random     |
    .               |     random     |

    Al nome del vettore (senza parentesi quadre) viene assegnata la
    locazione di memoria del primo elemento. Per trovare gli elementi
    successivi, viene usato l'indice del vettore come offset (e la dimensione del dato).

    In C non vengono effettuati controlli sulla lunghezza del vettore,
    quindi bisogna prestare attenzione a non scrivere dati al di fuori 
    della mamoria allocata al vettore (buffer overflow).

    */


    return 0;
}
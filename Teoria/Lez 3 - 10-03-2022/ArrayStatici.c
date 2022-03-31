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

    // Stringhe

    // Libreria per la gestione delle strighe

    #include <string.h>

    //la dimensione non e' obbligatoria se viene inizializzata subito;

    char stringa[4] = "ciao"; // --> stringa
    char stringa_2[] = "ciao"; // --> stringa
    char stringa_3[4] = {'c', 'i', 'a', 'o'}; // Vettore di caratteri, ma non ha le stesse proprietà di una stringa

    // La stringa in memoria e' formata cosi: 'c', 'i', 'a', 'o', '\0';
    // Tutte le stringhe terminano con il carattere \0 ovvero NULL, 
    // di conseguenza saranno utilizzabili solo n-1 caratteri.


    // I/O di stringhe:
    // printf/scanf oppure
    // gets/puts

    // gets: legge tutta la riga come stringa senza inserire il simbolo \n
    // *errore = gets(indirizzo di memoria dell'inizio del vettore stringa nel quale copiare i dati inseriri)
    // *errore = gets(stringa) opp var = gets(&stringa[0]) --> equivalenti
    // la funzione gets, se non da errori, ritorna l'indirizzo di memoria della stringa, altrimenti NULL
    
    // puts: stampa la stringa a schermo con uno /n alla fine
    // puts(stringa)

    // scanf:
    // la funzione scanf() funziona in modo identico sia per le stringhe che per gli interi,
    // ad eccezione del fatto che non e' necessario specificare l'indirizzo di memoria con '&', poiche'
    // il nome della stringa rappresenta di perse' l'indirizzo di memoria stesso (del primo elemento dell'array)
    // scanf("%s", nome_stringa)
    // La comodita' di usare la funzione scanf(), e che posso filtrare l'input utilizzando %s, 
    // senza dover processare successivamente il testo inserito (a differenza della funzione gets())

    return 0;
}
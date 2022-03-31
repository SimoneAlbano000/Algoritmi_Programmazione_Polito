// File:

#include <stdio.h>

int main() {
    return 0;

    // Creazione della variabile che ci permette di accedere ai file sul disco
    FILE* file;

    /*
    r - sola lettura
    w - sola scrittura
    a - aggiungi alla fine
    r+ - lettura/scrittura su file esistente
    w+ - lettura/scrittura su nuovo file
    */

   file = fopen("C:\\prova.txt", "w+");
   if (file == NULL) {
       printf("Errore!");
   }

    //funzioni
    
    // Lettura/scrittura per carattere
    // fgetc();
    // fputc();

    // Lettura/scrittura per riga/stringa
    // fgets();
    // fputs();
    // per poter elaborare i dati contenuti nella riga,
    // posso utilizzare la funzione sscanf() che permette di fare
    // il parsing della stringa e riformattarla e suddividerla in piu' variabili

    // Lettura formattata
    // fscanf();
    // fprintf();

    // Altre funzioni

    // fflush() --> cancella il contenuto di un file
    // feof() --> restituisce vero se sono arrivato alla fine del file 
    // rewind() --> posiziona il "puntatore" all'inizio del file

   fclose(file);

    // Utilizzo di tre streams standard per accedere alle risorse hardware del pc:
    // sono dei veri e propri file che vengono utilizzati per comunicare con l'hardware.
    // stdin - tastiera
    // stdout - terminale
    // stderr - errori 

}
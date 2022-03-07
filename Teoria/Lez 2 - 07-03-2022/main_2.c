// Stampa triangolo rettangolo di lato n

#include <stdio.h>

int main() {

    int lato;
    char simbolo = '+';

    printf("Inserire la lunghezza del lato del triangolo rettangolo... \n");
    scanf("%d", &lato);
    for (int i = 0; i <= lato; i++) {
       for (int j = 0; j < i; j++) {
           printf("%c", simbolo);
       } 
       printf("\n");
    }

    return 0;
}

/*
#include <stdio.h>

int main() {

    int altezza;
    char simbolo = '+';
    char spazio = ' ';

    printf("Inserire l'altezza della piramide... \n");
    scanf("%d", &altezza);

    for (int i = 0; i <= altezza; i++) {
        for (int j = 0; j < (altezza - i)/2; j++) {
            printf("%c", spazio);
        }
        for (int k = 0; k <= i; k++) {
            printf("%c", simbolo);
        }
        for (int j = 0; j < (altezza - i)/2; j++) {
            printf("%c", spazio);
        }
        printf("\n");
    }
    return 0;
}

*/
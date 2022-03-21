// Blackjack

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define BLACKJACK 21

char mazzo[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'D', 'J', 'Q', 'K'};
int valore_mazzo[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};
int pozzo_giocatore = 0;
int pozzo_croupier = 0;
int carta_giocatore_temp = 0;
int carta_croupier_temp = 0;
time_t t;

char val;
int end = 0;

void disegnaCarta(char carta) {
    printf(" -----\n|     |\n|  %c  |\n|     |\n -----\n", carta);
}

void stai() {
    while (pozzo_croupier < 17) {
        printf("Il Croupier sceglie una carta dal mazzo... \n");
        carta_croupier_temp = (rand() % 13);
        disegnaCarta(mazzo[valore_mazzo[carta_croupier_temp]]);
        pozzo_croupier += valore_mazzo[carta_croupier_temp + 1];
    }
    if (pozzo_croupier > BLACKJACK) {
        printf("Hai vinto, il croupier ha sballato!, (%d)", pozzo_croupier);
    } else if (pozzo_croupier <= BLACKJACK && pozzo_croupier < pozzo_giocatore) {
        printf("Hai vinto, croupier: %d, tu: %d", pozzo_croupier, pozzo_giocatore);
    } else if (pozzo_croupier <= BLACKJACK && pozzo_croupier > pozzo_giocatore) {
        printf("Hai perso, croupier: %d, tu: %d", pozzo_croupier, pozzo_giocatore);
    } else if (pozzo_croupier <= BLACKJACK && pozzo_croupier == pozzo_giocatore) {
        printf("Pareggio, croupier: %d, tu: %d", pozzo_croupier, pozzo_giocatore);
    }
    end = 1;
}

void pesca() {
    printf("Il Croupier ti distribuisce una carta carta...\n");
    carta_giocatore_temp = (rand() % 13);
    disegnaCarta(mazzo[valore_mazzo[carta_giocatore_temp]]);
    pozzo_giocatore += valore_mazzo[carta_giocatore_temp + 1];
    if (pozzo_giocatore > BLACKJACK) {
        printf("Hai sballato!, (%d)", pozzo_giocatore);
        end = 1;
    }
}
    

int main() {

    srand((unsigned int) time(&t));

    printf("Il Croupier sceglie una carta dal mazzo... \n");
    carta_croupier_temp = (rand() % 13);
    disegnaCarta(mazzo[valore_mazzo[carta_croupier_temp]]);
    pozzo_croupier += valore_mazzo[carta_croupier_temp + 1]; 

    printf("Il Croupier ti distribuisce due carte... \n");
    for (int i = 0; i < 2; i++) {
        carta_giocatore_temp = (rand() % 13);
        disegnaCarta(mazzo[valore_mazzo[carta_giocatore_temp]]);
        pozzo_giocatore = pozzo_giocatore + valore_mazzo[carta_giocatore_temp + 1];
    }

    while (end == 0) {

        printf("Peschi una carta oppure stai (p-s)? tot: %d\n", pozzo_giocatore);
        scanf("%c", &val);

        if (val == 's') { // stai
            stai();    
        } else if (val == 'p') { // pesca
            pesca();
        } 
    }

    return 0;
}

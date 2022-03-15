#include <stdio.h>

#define MAX_LEN 10

int main() {

    int vettore[MAX_LEN] = {0};
    int vettore_indici[MAX_LEN] = {0};
    int temp, duplicato, index = 0;

    printf("Inserire fino ad un massimo di %d interi positivi... \n", MAX_LEN);
    for (int i = 0; i < MAX_LEN; i++) {
        scanf("%d", &temp);
        if (temp >= 0) {
            vettore[i] = temp;
        } else {
            break;
        }
    }

    printf("Inserire il valore per il quale si vogliono conoscere gli indici dei duplicati, se presenti... \n");
    scanf("%d", &duplicato);
    for (int j = 0; j < MAX_LEN; j++) {
        if (vettore[j] == duplicato) {
            vettore_indici[index] = j;
            index++;
        }
    }

    printf("duplicati = [");
    for (int k = 0; k < index; k++) {
        printf("%d", vettore_indici[k]);
        if (k != MAX_LEN) {
            printf(", ");
        }
    }
    printf("] \n");

    return 0;
}
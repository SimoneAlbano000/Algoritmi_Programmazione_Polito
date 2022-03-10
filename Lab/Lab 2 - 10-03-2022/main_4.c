#include <stdio.h>

#define MAX_LEN 10

int main() {

    int vettore[MAX_LEN] = {0};
    int index = 0;

    printf("Inserire fino ad un massimo di %d caratteri, fai in modo che l'inserimento avvenga in modo monotono... \n", MAX_LEN);
    for (int i = 0; i < 2; i++) {
        scanf("%d", &vettore[i]);
        index++;
    }

    if (vettore[1] > vettore[0]) { // monotona crescente
        for (int j = 2; j < MAX_LEN; j++) {
            scanf("%d", &vettore[j]);
            if (vettore[j] < vettore[j - 1]) {
                break;
            } else {
                index++;
            }
        }
    } else { // monotona decrescente
        for (int j = 2; j < MAX_LEN; j++) {
            scanf("%d", &vettore[j]);
            if (vettore[j] > vettore[j - 1]) {
                break;
            } else {
                index++;
            }
        }
    }
    
    printf("[");
    for (int k = 0; k < index; k++) {
        printf("%d", vettore[k]);
        if (k != MAX_LEN) {
            printf(", ");
        }
    }
    printf("] \n");

    return 0;
}
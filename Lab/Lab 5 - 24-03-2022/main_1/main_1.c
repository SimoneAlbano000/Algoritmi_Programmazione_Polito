#include <stdio.h>

int main() {
    int matrix[5][5] = {0};
    
    printf("Inserire gli elementi della matrice 5x5 riga-by-riga... \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d %d %d %d %d", &matrix[i][0], &matrix[i][1], &matrix[i][2], &matrix[i][3], &matrix[i][4]);
    }

    // Controlla righe
    for (int j = 0; j < 5; j++) {
        for (int k = 1; k < 4; k++) {
            if (matrix[j][k - 1] == 0 && matrix[j][k] == 0 && matrix[j][k + 1] == 0) {
                printf("Nella riga %d e' presente la sequenza 0 0 0... \n", j + 1);
                // Esci dal ciclo interno
                k = 4;
            }
        }
    }

    // Controlla colonne
    for (int j = 0; j < 5; j++) {
        for (int k = 1; k < 4; k++) {
            if (matrix[k - 1][j] == 0 && matrix[k][j] == 0 && matrix[k + 1][j] == 0) {
                printf("Nella colonna %d e' presente la sequenza 0 0 0... \n", j + 1);
                // Esci dal ciclo interno
                k = 4;
            }
        }
    }

    return 0;
}
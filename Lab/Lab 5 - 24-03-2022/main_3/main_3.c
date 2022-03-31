// Topolino

#include <stdio.h>
#include <string.h>

// Dimensioni della mappa
#define mappa_x 10
#define mappa_y 10

int main() {
    float mappa[mappa_x][mappa_y] = {0};
    int colonna = 0;
    float val_float = 0;
    
    FILE* file_mappa;
    file_mappa = fopen("map.dat", "r");

    while (!feof(file_mappa)) {
        fscanf(file_mappa, "%f", &val_float);
        mappa[0][colonna] = val_float;
        colonna++;
    }

    fclose(file_mappa);

    // Print matrix
    for (int i = 0; i < mappa_x; i++) {
        for (int j = 0; j < mappa_y; j++) {
            printf("%.1f ", mappa[i][j]);
        }
        printf("\n");
    }

    return 0;
}
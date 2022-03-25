#include <stdio.h>
#include <string.h>

#define MAX_LEN 10

int main() {

    float matrix[MAX_LEN][MAX_LEN] = {0};
    char dato[] = "";
    int i = 0;
    int j = 0;
    
    FILE* data;
    data = fopen("data.dat", "r");

    while (!feof(data)) {
        fscanf(data, "%s", dato);
        printf("%s ", dato);
    }

    fclose(data);
/*
    for (i = 0; i < MAX_LEN; i++) {
        for (j = 0; j < MAX_LEN; j++) {
            printf("%f ", matrix[i][j]);
        }
        printf("\n");
    }
*/

    return 0;
}
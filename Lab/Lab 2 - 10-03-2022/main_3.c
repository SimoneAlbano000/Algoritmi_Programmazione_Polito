#include <stdio.h>

#define LEN 10

int main() {

    int temp;
    int index1, index2 = 0;
    int v1[LEN];
    int v2[LEN];

    printf("Inserire 10 valori interi... \n");
    for (int i = 0; i < LEN; i++) {
        scanf("%d", &temp);
        if (temp > 0 || (temp < 0 && temp%3 == 0)) {
            v1[index1] = temp;
            index1++;
        } else if (temp%2 == 1 || (temp < 0 && temp%3 != 0)) {
            v2[index2] = temp;
            index2++;
        }
    }

    printf("v1 = [");
    for (int j = 0; j < index1; j++) {
        printf("%d", v1[j]);
        if (j != LEN) {
            printf(", ");
        }
    }
    printf("] \n");

    printf("v2 = [");
    for (int k = 0; k < index2; k++) {
        printf("%d", v2[k]);
        if (k != LEN) {
            printf(", ");
        }
    }
    printf("] \n");

    return 0;
}
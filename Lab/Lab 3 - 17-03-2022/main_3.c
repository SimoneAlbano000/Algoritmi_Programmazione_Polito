#include <stdio.h>

int main() {
    char stringa[101] = "";
    int caratteri, alpha_caratteri, caratteri_max, numeri, spazi, parole;

    printf("Inserire una stringa (max 100 char)... \n");
    fgets(stringa, sizeof(stringa), stdin);
    for (int i = 0; i < sizeof(stringa) - 1; i++) {
        if (stringa[i] != '\0') {
            caratteri++;
        }
        if (((int)stringa[i] >= 65 && (int)stringa[i] <= 90) || ((int)stringa[i] >= 97 && (int)stringa[i] <= 122)) {
            alpha_caratteri++;
        } else if ((int)stringa[i] >= 65 && (int)stringa[i] <= 90) {
            caratteri_max++;
        } else if ((int)stringa[i] >= 48 && (int)stringa[i] <= 57) {
            numeri++;
        } else if ((int)stringa[i] == 32) {
            spazi++;
        }
        if (i != 0) {
            if ((int)stringa[i] == 32 && (int)stringa[i - 1] != 32 && stringa[i + 1] != '\n') {
                parole++;
            }
        }      
    }
    printf("Caratteri: %d\n Caratteri alfaetici: %d\n Caratteri maiuscoli: %d\n Cifre decimali: %d\n Spazi: %d\n Parole: %d\n", caratteri - 1, alpha_caratteri - 1, caratteri_max, numeri, spazi, parole);
    return 0;
}
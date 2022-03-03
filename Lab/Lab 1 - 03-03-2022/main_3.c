#include <stdio.h>

int main() {
    int input;
    int counter = 0;
    printf("Inserire il numero... \n");
    scanf("%d", &input);

    for (int i = 1; i <= (input/2); i++) {
        if (input % i == 0) {
            counter++;
        }
    }
    if (counter == 1) {
        printf("Il numero %d e' primo... \n", input);
    } else {
        printf("Il numero %d non e' primo e ha %d divisori... \n", input, (counter+1));
    }
    return 0;
}
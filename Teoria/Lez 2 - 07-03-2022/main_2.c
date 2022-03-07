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
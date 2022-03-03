#include <stdio.h>

int main() {
    int var1, var2;
    char char1;
    printf("Inserisci due interi e un carattere aritmetico nel seguente ordine: int|char|int \n");
    scanf("%d %c %d", &var1, &char1, &var2);
    printf("I valori acquisiti da tastiera sono: var1 = %d, var2 = %d, char1 = %c", var1, var2, char1);
    return 0;
}
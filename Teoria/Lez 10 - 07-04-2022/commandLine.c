#include <stdio.h>

int main(int argc /*Numero di stringhe*/, char* argv[] /*Vettore di stringhe*/) {
    printf("%d \n", argc);
    for (int i = 0; i < argc; i++) {
        printf("%s ", argv[i]);
    }
    return 0;
}
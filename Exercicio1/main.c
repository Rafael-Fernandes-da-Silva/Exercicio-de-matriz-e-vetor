#include <stdio.h>

int main() {
    char vetorA[11] = "Ola mundo";
    char vetorB[11];
    int c, aumento = 0;

    printf(" Escreva uma frase: ");

    for (c = 0; c < 9; c++) {
        printf("%c", vetorA[c]);
    }

    printf("\n");

    for(c = 0; c < 9; c++) {
        vetorB[aumento] = vetorA[aumento];
        aumento = aumento + 1;
        if (c == 0) {
            printf(" O vetor B: ");
        }
        printf("%c", vetorB[c]);
    }

    return 0;
}
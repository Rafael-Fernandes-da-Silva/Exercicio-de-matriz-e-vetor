#include <stdio.h>

int main() {
    int diagonalP, diagonalS, i = 0, j = 0;
    static int matrizX[2][2] = {
            {5, 10},
            {13, 2}
    };

    diagonalP = matrizX[i][j] + matrizX[i + 1][j + 1];
    diagonalS = matrizX[i + 1][j] + matrizX[i][j + 1];

    printf("\n A soma da diagonal principal e: %i", diagonalP);
    printf("\n A soma da diagonal secundaria e: %i", diagonalS);

    return 0;
}

#include <stdio.h>

int main() {
    int i, j;

    int matrizA[3][3] = {
            {1, -1, 9},
            {7, 14, 8},
            {0, -5, 5}
    };

    int matrizB[3][3] = {
            {-1, 1, -9},
            {-7, 14, -8},
            {0, 5, -5}
    };

    for (int k = 0; k < 3; k++) {
        for (j = 0; j < 3; j++) {
            if (matrizA[i][j] + matrizB[i][j] == 0) {
                printf("\n O elemento [%i][%i] da matrizB e oposto a matrizA.", i, j);
            } else {
                printf("\n O elemento [%i][%i] da matrizB nao e oposto a matrizA.", i, j);
            }
        }
        i = i + 1;
    }

    return 0;
}

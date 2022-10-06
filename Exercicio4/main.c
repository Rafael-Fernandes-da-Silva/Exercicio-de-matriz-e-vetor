#include <stdio.h>

int main() {
    int i = 0, j = 0, matrizAt[3][2];
    int matrizA[2][3] = {
            {8, 5, 4},
            {77, 61, 22}
    };

    for (int c = 0; c < 3; c++) {
        for (int d = 0; d < 2; ++d) {
            matrizAt[i][j] = matrizA[i][j];
            printf("%i", matrizAt[i][j]);
            if (d == 0) {
                printf(" ");
            }
            if (d == 1) {
                printf("\n");
            }
            i = i + 1;
        }
        j = j + 1;
        i = 0;
    }

    return 0;
}

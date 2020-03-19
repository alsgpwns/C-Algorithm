#include <stdio.h>
#include<stdlib.h>

void main() {
    int A[5][5];
    int B[5][5];
    int k = 0;

    for (int R = 0; R < 5; R++) {
        for (int C = 0; C < 5 - R; C++) {
            k = k + 1;
            A[R][C] = k;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (A[i][j] < 1) {
                A[i][j] = 0;
            }
            printf("[%d]", A[i][j]);
        }
        printf("\n");
    }

    printf("------------------\n");

    for (int R = 0; R < 5; R++) {
        for (int C = 0; C < 5; C++) {
            B[C][4 - R] = A[R][C];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("[%d]", B[i][j]);
        }
        printf("\n");
    }
}
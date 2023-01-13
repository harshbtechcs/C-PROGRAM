#include <stdio.h>
#define N 4

int main() {
    int A[N][N];
    int i, j;
    int flag = 1; // flag to check if matrix is identity matrix

    printf("Enter elements of the %dx%d matrix: \n", N, N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // check if the matrix is an identity matrix
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j && A[i][j] != 1) {
                flag = 0;
                break;
            } else if (i != j && A[i][j] != 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag) {
        printf("Matrix is an identity matrix.\n");
    } else {
        printf("Matrix is not an identity matrix.\n");
    }

    return 0;
}

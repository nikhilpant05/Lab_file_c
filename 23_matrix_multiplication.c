// By Shorya
#include <stdio.h>

int main() {
    int m;
    int n;
    int p;
    int q;
    int i;
    int j;
    int k;

    printf("Enter rows and columns of A: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of B: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrices cannot be multiplied");
        return 0;
    }

    int A[m][n];
    int B[p][q];
    int C[m][q];

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
 
int main()
{
    int a[10][10], scalar, m, n, i, j;
 
    printf("Enter the size of matrix (m x n): ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the scalar: ");
    scanf("%d", &scalar);
 
    printf("The matrix after scalar multiplication:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", scalar*a[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}

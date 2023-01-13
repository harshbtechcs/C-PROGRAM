#include <stdio.h>

int main() {
    int matrix[100][100], rows, columns, i, j, sum = 0;
    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    
    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }
    
    printf("Sum of main diagonal elements: %d", sum);
    
    return 0;
}

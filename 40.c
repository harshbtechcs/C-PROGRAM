#include <stdio.h>

int main() {
    int matrix[100][100], rows, columns, i, j, sum = 0,count=0, temp=0;
    
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
            if (matrix[i][j]!=0) {
                count++;
            }
        }
    }
    if(count>rows*columns/2)  // if matrix is not sparse
    {
        printf("Matrix is not sparse matrix \n");
    }
    else  // if matrix is sparse
    {
        for(i=0;i<rows;i++)
        {
            for(j=0;j<columns;j++)
            {
                if(matrix[i][j]!=matrix[j][i])
                {
                    temp=1;
                    break;
                }
            }
        }
        if(temp==0)
        {
            printf("Matrix is both sparse matrix and transpose matrix");
        }
        else
        {
            printf("Matrix is only sparse matrix");
        }
    }
    return 0;
}

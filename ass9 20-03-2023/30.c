#include<stdio.h>
int main(){
    int matrix[100][100], zero_count = 0, row, col;
    printf("Enter rows of the matrix: ");
    scanf("%d", &row);
    printf("Enter cols of the matrix: ");
    scanf("%d", &col);

    printf("Enter the matrix:\n");
    for (int i = 0; i < row; i++)//input
    {
        for (int j = 0; j < col; j++)
        {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        
    }

    for (int i = 0; i < row; i++)//checking if it is a sparse matrix
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                zero_count++;
            }
            
        }
        
    }

    (zero_count > row*col/2) ? printf("It is a sparse matrix.") : printf("It is a not sparse matrix.");;//declaring type
}
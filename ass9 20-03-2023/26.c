#include<stdio.h>
int main(){
    int matrix[100][100], n, sum = 0;
    printf("Enter the dimension: ");
    scanf("%d", &n);
    printf("Enter the matrix: ");
    for (int i = 0; i < n; i++)//input
    {
        for (int j = 0; j < n; j++)
        {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        
    }

    
    for (int i = 0; i < n; i++)//sum of rows and col of the matrix
    {
        int row = 0;
        int col = 0;
        for (int j = 0; j < n; j++)
        {
            row += matrix[i][j];
            col += matrix[j][i];
        }
        printf("\nThe sum of row %d: %d\n", i+1, row);
        printf("The sum of col %d: %d", i+1, col);
        
    }
}
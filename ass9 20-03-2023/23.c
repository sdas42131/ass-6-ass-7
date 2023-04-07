#include<stdio.h>
int main(){
    int matrix[100][100], transpose[100][100], n, temp;
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

    for (int i = 0; i < n; i++)//transposing the matrix
    {
        for (int j = 0; j < n; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
        
    }

    printf("The transpose of the matrix is:\n");
    for (int i = 0; i < n; i++)//output
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
}
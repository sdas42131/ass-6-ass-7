#include<stdio.h>
int main(){
    int matrix[100][100], sum = 0, i = 0;
    printf("Enter the 3 x 3 matrix:\n");
    for (int i = 0; i < 3; i++)//input
    {
        for (int j = 0; j < 3; j++)
        {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        
    }

    
    printf("determinant of the matrix is: %d", matrix[0][0] * ((matrix[1][1]*matrix[2][2]) - (matrix[2][1]*matrix[1][2])) -matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[2][0] * matrix[1][2]) + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[2][0] * matrix[1][1]));
}
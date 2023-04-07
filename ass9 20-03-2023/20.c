#include<stdio.h>
int main(){
    int matrix1[100][100], matrix2[100][100], sum[100][100], size;
    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter matrix1: \n");
    for (int i = 0; i < size; i++){//input of matrix1
        for (int j = 0; j < size; j++)
        {
            printf("Enter matrix1[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter matrix2: \n");
    for (int i = 0; i < size; i++){//input of matrix2
        for (int j = 0; j < size; j++)
        {
            printf("Enter matrix2[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < size; i++){//adding matrix1 and matrix2
        for (int j = 0; j < size; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The summation matrix is:\n");
    for (int i = 0; i < size; i++){//output
        for (int j = 0; j < size; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
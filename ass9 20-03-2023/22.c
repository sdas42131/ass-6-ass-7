#include<stdio.h>
int main(){
    int matrix1[100][100], matrix2[100][100], mul[100][100], size, sum;
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

    for (int i = 0; i < size; i++){//multiplication matrix1 and matrix2
        for (int j = 0; j < size; j++){
            sum = 0;
            for (int k = 0; k < size; k++){
                sum += matrix1[i][k] * matrix2[k][j];
            }
            mul[i][j] = sum;
        }
    }

    printf("The multiplication matrix is:\n");
    for (int i = 0; i < size; i++){//output
        for (int j = 0; j < size; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
}
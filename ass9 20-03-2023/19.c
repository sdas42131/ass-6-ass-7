#include<stdio.h>
int main(){
    int array[100][100], row, col;
    printf("Enter array rows: ");
    scanf("%d", &row);
    printf("Enter array columns: ");
    scanf("%d", &col);

    printf("Enter 2D array: \n");
    for (int i = 0; i < row; i++){//input
        for (int j = 0; j < col; j++)
        {
            printf("Enter array[%d][%d]: ", i+1, j+1);
            scanf("%d", &array[i][j]);
        }
    }

    printf("The 2D array is:\n");
    for (int i = 0; i < row; i++){//output
        for (int j = 0; j < col; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

}
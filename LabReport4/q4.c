#include <stdio.h>
int main()
{
    int i, j, ROWS, COLS;
    int mat1[100][100];
    int mat2[100][100];
    int result[100][100];
    
    printf("Enter the number of rows , columns : ");
    scanf("%d,%d",&ROWS,&COLS);

    printf("Enter elements of first matrix: \n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix: \n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("The sum of the two matrices is: \n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int i, j, ROWS,COLS;
    int mat[100][100];
    int transpose[100][100];
    
    printf("Enter rows, columns : ");
    scanf("%d,%d",&ROWS,&COLS);

    printf("Enter elements of matrix: \n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);}}

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            transpose[j][i] = mat[i][j];
        }
    }

    printf("The transpose of the matrix is: \n");
    for (i = 0; i < COLS; i++)
    {
        for (j = 0; j < ROWS; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int** addMatrices(int matrix1[2][2], int matrix2[2][2]);
int** multiplyMatrices(int matrix1[2][2], int matrix2[2][2]);
void printMatrix(int** matrix);


int main(int argc, char *argv[])
{
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};

    int **sum = addMatrices(matrix1,matrix2);
    printMatrix(sum);

    printf("\n");
    
    int **product = multiplyMatrices(matrix1,matrix2);
    printMatrix(product);

    return EXIT_SUCCESS;
}

int **addMatrices(int matrix1[2][2], int matrix2[2][2])
{
    int **sum;

    sum = malloc(sizeof(int *) *2);
    for(int i = 0; i<2; i++)
    {
        sum[i] = malloc(sizeof(int) *2);
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    return sum;
}

int **multiplyMatrices(int matrix1[2][2], int matrix2[2][2])
{
    int **sum;

    sum = malloc(sizeof(int *) *2);
    for(int i = 0; i<2; i++)
    {
        sum[i] = malloc(sizeof(int) *2);
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            sum[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }

    return sum;
}

void printMatrix(int** matrix)
{
    for(int x=0; x<2; x++)
    {
        for(int y=0; y<2; y++)
        {
            printf("%d\n",matrix[x][y]);
        }
    }
}
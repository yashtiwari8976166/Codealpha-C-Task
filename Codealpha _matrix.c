#include <stdio.h>

#define MAX 10


void inputMatrix(int a[MAX][MAX], int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void displayMatrix(int a[MAX][MAX], int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}


void addition(int a[MAX][MAX], int b[MAX][MAX],
              int r, int c)
{
    int result[MAX][MAX];
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nMatrix Addition:\n");
    displayMatrix(result, r, c);
}


void multiplication(int a[MAX][MAX], int b[MAX][MAX],
                    int r1, int c1, int c2)
{
    int result[MAX][MAX] = {0};
    int i, j, k;

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nMatrix Multiplication:\n");
    displayMatrix(result, r1, c2);
}


void transpose(int a[MAX][MAX], int r, int c)
{
    int result[MAX][MAX];
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            result[j][i] = a[i][j];
        }
    }

    printf("\nMatrix Transpose:\n");
    displayMatrix(result, c, r);
}

int main()
{
    int a[MAX][MAX], b[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of Matrix A:\n");
    inputMatrix(a, r1, c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of Matrix B:\n");
    inputMatrix(b, r2, c2);

    
    if (r1 == r2 && c1 == c2)
    {
        addition(a, b, r1, c1);
    }
    else
    {
        printf("\nAddition is not possible.\n");
    }

    if (c1 == r2)
    {
        multiplication(a, b, r1, c1, c2);
    }
    else
    {
        printf("\nMultiplication is not possible.\n");
    }

    transpose(a, r1, c1);
    transpose(b, r2, c2);

    return 0;
}
#include <stdio.h>
#include <conio.h>

void Add_matrix(int a[][4], int b[][4], int a_b[][4], int row); // function definition of of matrix adding function

int main()
{
    int A[4][4] = {1, 2, 4, 3, 4, 5, 5, 6, 8, 9, 11, 2, 34, 12, 0, 9};
    int B[4][4] = {2, -1, 0, 3, 5, 6, 9, 2, 4, 5, 0, -2, 5, 9, 3, 2}, A_B[4][4], i;

    Add_matrix(A, B, A_B, 4); // threee matrix and there Matrix and row (matrix col must be 4 );

    // printing matrix A
    printf("matrix A = \n");
    for (i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%2d ", A[i][j]);

        printf("\n");
    }

    // printing matrix A
    printf("\n\nmatrix B = \n");
    for (i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%2d ", B[i][j]);

        printf("\n");
    }

    // printing A+B matrix
    printf("\n\nA+B = \n");
    for (i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%2d ", A_B[i][j]);

        printf("\n");
    }

    getch();
    return 0;
}

void Add_matrix(int a[][4], int b[][4], int a_b[][4], int row)
{
    int i, j;

    // matrix addition
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < 4; j++)
        {
            a_b[i][j] = a[i][j] + b[i][j];
        }
    }
}
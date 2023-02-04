#include<stdio.h>
#include<conio.h>

// int  zero_count (int matrix[][], int m, int n);

int main()
{
    int m,n,i,j, Zer0 = 0;
    printf("Enter order of your matrix : ");
    printf("\nM X N= ");
    scanf("%d X %d",&m, &n);

    int matrix[m][n]; 

    // taking matrix elements from user 
    printf("Enter Objects of matrix %d X %d  : \n",m,n);
    for(int i=0; i<m ; i++)
    {
        for(int j=0 ; j<n ; j++)
           scanf("%d",&matrix[i][j]);
    }


    // Calculating no of zero's in matrix 
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(matrix[i][j] == 0)
               Zer0++; 
        }
    }

    // int zero = zero_count(matrix,m,n);// array , row , col 

   // Detrimining matrix is sparse or not 
    if(Zer0 > (m*n)/2)
       printf("Matrix is spare\n");
    else 
       printf("Matrix is Dense \n");


    getch();
    return 0;
}


/* till now not clear how to pass a 2d array in the function probably we will learn today about it 
// function definition which will count number of zero's 
int  zero_count (int matrix[][], int m, int n)
{
    int  i, j,Zer0 = 0;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(matrix[i][j] == 0)
               Zer0++; 
        }
    }
    return Zer0;

}
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int matrix[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int  i, j;

    // upper triangular matirx
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
          {
            if(j >= i)
              printf("%2d ",matrix[i][j]);
            else 
              printf(" 0 ");
          }

        printf("\n");
    }
     
     printf("\n\n\n\n");
    // lower triangular matrix 
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(j<=i)
              printf("%2d ",matrix[i][j]);
            else 
              printf(" 0 ");
        }

        printf("\n");
    }
 

    return 0;

}
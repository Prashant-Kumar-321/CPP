#include<stdio.h>
#include<conio.h>

int main()
{
  int A[3][3] = {2,3,1,-1}, B[3][3] = {3,5,1,-4}, i, j, k, sum = 0;
  int C[3][3];

  // Taking elements as input  of matrix of A and B
  printf("Enter Element \n");
  printf("Matrix A (3X3) \n");

  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
      scanf("%d",&A[i][j]);
  }

  printf("Matrix B (3X3) \n\n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
      scanf("%d",&B[i][j]);
  }


  // program to multiply of A and B
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      sum = 0; // reintialization of sum after each iteration of j loop
      for(k=0; k<3; k++)
      {
        sum += A[i][k] * B[k][j] ;
      }
      C[i][j] = sum ;
    }
  }

  // print AXB
  printf("\n==============================================\nA X B = \n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
     printf("%2d ", C[i][j] ) ;
    }
    printf("\n");
  }

  return 0;
}

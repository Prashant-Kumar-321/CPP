#include<stdio.h>
#include<conio.h>

int main()
{
  int A[3][3] = {1,2,5,6,9,0,3,-7,-9}, B[3][3], i, j;
  /*
  expected output
  1 6  3
  2 9 -7
  5 0 -9
  */

  // program to transpose of matrix of matrix A
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      B[i][j] = A[j][i] ;
    }
  }

  // print Tranpose of Matrix A
  printf("Tranpose of A^T = \n");

  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%2d",B[i][j]);
    }
    printf("\n");
  }

  getch();
  return 0;
}

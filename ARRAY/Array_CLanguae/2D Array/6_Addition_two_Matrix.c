#include<stdio.h>
#include<conio.h>

int main()
{
  int A[3][3], B[3][3], c[3][3];
  int i,j;

  printf("Enter Elemens of matrix A order(3x3)(row by row) \n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      scanf("%d",&A[i][j]);
    }
  }

  printf("Enter Elements of matrix B order(3X3) (row by row)\n");
    for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      scanf("%d",&B[i][j]);
    }
  }

  // program to add matrix A + matrix B ;
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      c[i][j] = A[i][j] + B[i][j];
    }
  }

  // printing A+B
  printf("\n\n================================\n");
  printf("\nA + B = \n\n");

  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%3d ",c[i][j]);
    }
    printf("\n");
  }


  return 0;
}

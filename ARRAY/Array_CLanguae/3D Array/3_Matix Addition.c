#include<stdio.h>
#include<conio.h>

int main()
{
  int Row, Col;
  int matix_sum[Row][Col];
  int matrix[2][Row][Col], i,j,k;

  // Taking input from user
  printf("Enter Elements of two matrix of M X N which you want to add: \n");
  printf("\nMatix's Row = ");
  scanf("%d",&Row);

  printf("\nMatrix's Col = ");
  scanf("%d",&Row);

  printf("Enter elements \n");

  for(i=0; i<2; i++)
  {
    for(j=0; j<Row; j++)
    {
      for(k=0; k<Col; k++)
        scanf("%d",&matrix[i][j][k]);
    }
  }

  // Addition of two matix
  for(i=0; i<1; i++)
  {
    for(j=0; j<Row; j++)
    {
      for(k=0; k<Col; k++)
      {
        matix_sum[j][k] = matrix[i][j][k] + matrix [i+1][j][k] ;
      }
    }
  }

  // print Matirx sum
  printf("\nA+B = \n\n");
  for(i=0; i<Row; i++)
  {
    for(j=0; j<Col; j++)
    {
      printf("%2d ",matix_sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}

#include <stdio.h>
#include<conio.h>

int Determinant(int a[3][3], int size) // recursive function to calcualte determinant
{
  // i,j,k for maintaining loop , r,c for row and col
  int i, j, k, flag = 0, Nrow = 1, Ncol = -1, s = -1;
  int b[size - 1][size - 1], det = 0;

  if (size == 1)
    return a[0][0];

  for (i = 0; i < size; i++)
  {
    s = s*-1;

    // Creating sub determinant
    for (j = 0; j < size - 1; j++)
    {
      for (k = 0; k < size - 1; k++)
      {
        flag = 0;
        while (flag != 1)
        {
          if (Ncol == size - 1)
          {
            Nrow++;
            Ncol = -1;
          }

          while (flag != 1)
          {
            Ncol++;
            if (Nrow != 0 && Ncol != i)
            {
              b[j][k] = a[Nrow][Ncol];
              flag = 1;
              break;
            }
          }
        }
      }
    }
    // recursive function call
    det = det + s * a[0][i] * Determinant(b,size-1);
   
  }
  return   det;
}

int main()
{
  // array(matrix 3X3 declare);
  int mat[3][3] = {1, 2, 3, 3,1,2,3,4,5};
  int determinant;

  determinant = Determinant(mat, 3); // function call that will return determinant of mat

     printf("Determinant = %d",determinant);

  return 0;
}

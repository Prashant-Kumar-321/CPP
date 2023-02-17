#include<stdio.h>
#include<conio.h>

int main()
{
  int No_arry, ROWS, COLS; // INDEX OF ARRAY

  // Declare a 3D array
  int a[4][2][3];

  // Inserting Elements
  // We need THREE NESTED FOR LOOP
  for(int i=0; i<4; i++)
  {
    for(int j=0; j<2; j++)
    {
      for(int k=0; k<3; k++)
      {
        a[i][j][k] = i+j+k ;
      }
    }
  }
  // Counter variable i is going to acess the the matrix
  // Counter variable j is going to acess the row of the matrix
  // Counter vaiable k is going to acess the col of the matrix

  printf("We have sucessfully inserted elements on the a[4][2][3]\n");

  // printing the matrix
  for(int i=0; i<4; i++)
  {
    for(int j=0; j<2; j++)
    {
      for(int k=0; k<3; k++)
        printf("%2d ",a[i][j][k]);
      printf("\n");
    }
    printf("\n");

  }

  // Intialization of 3D array;
  char b[2][3][3] = {
                      { {1,2,3}, {2,3,4}, {3,4,5} },
                      { {4,5,6}, {5,6,18}, {33,35,39} }
                    };
    // printing the the array b
    printf("\nArray B[2][3][3]\n\n");
    for(int i=0; i<2; i++)
    {
      for(int j=0; j<3; j++)
      {
        for(int k=0; k<3; k++)
        {
          if(k==2)
           printf("|%2c |", b[i][j][k]);

          else
          printf("|%2c ", b[i][j][k]);
        }

        printf("\n");
      }

      printf("\n===========================================================================\n\n");
    }

    int  Row, Col,B[Row][Col];
    printf("Enter \nRow = ");
    scanf("%d",&Row);
    printf("Col = ");
    scanf("%d",&Col);

    printf("Enter elements of matix %d X %d \n",Row, Col);

    for(int i=0; i<Row; i++)
    {
      for(int j=0; j<Col; j++)
      {
        scanf("%d",&B[i][j]);
      }
    }
    // printing
    printf("matrix %d X %d is \n\n",Row, Col);
     for(int i=0; i<Row; i++)
    {
      for(int j=0; j<Col; j++)
      {
        printf("%2d ",B[i][j]);
      }
      printf("\n");
    }




  return 0;
}



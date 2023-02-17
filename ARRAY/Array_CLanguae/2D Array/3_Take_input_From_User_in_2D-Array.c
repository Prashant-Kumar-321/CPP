#include<stdio.h>
#include<conio.h>


int main()
{

  int array[3][3], i, j; // Array declaration of 3 row and 3 columns [3x3 array] ;
  printf("Enter 9 numbers\n");

  for(i=0; i<3; i++) // row
  {
    for(j=0; j<3; j++) // row's columns
    {
      scanf("%d",&array[i][j]);
    }
  }


  // printing numbers of an arrays 3x3 array ;

  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%4d ",array[i][j]);
    }
    printf("\n");
  }




 return 0;
}

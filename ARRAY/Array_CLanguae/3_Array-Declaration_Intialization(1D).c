
#include<stdio.h>

int main()
{
  int x[5]; // declare array of size 5(5 block in array )
  x[0] = 9;
  x[1] = 5;
  x[2] = 12; // Assignment
  x[3] = 45;
  x[4] = 13;

  // print elements of array
  printf("%d ",x[0]);
  printf("%d ",x[1]);
  printf("%d ",x[2]);
  printf("%d ",x[3]);
  printf("%d ",x[4]);

  // using loop accesing element of array
  int a[6]; // var
  for(int i = 0; i<6; i++)
  {
    a[i] = i ;
  }
  for(int i = 0; i<6; i++)
  {
    printf("%d ",a[i]);
  }


  return 0;
}

#include<stdio.h>
#include<conio.h>

int main()
{
  int a[5][4],i,j;

  for(i=0; i<5; i++)
  {
    for(j=0; j<4; j++)
    {
      a[i][j] = i+j;
    }
  }

  // Accessing elements of array
  for(i=0; i<5; i++)
  {
    for(j=0; j<4; j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n\n");
  }

  return 0;
}


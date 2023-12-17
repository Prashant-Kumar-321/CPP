#include<stdio.h>
#include<conio.h>

int main()
{
//  int age[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12},i,j;

//  int age[][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17} ,i,j;
/*
Definining columns size is important but if we don't define size of rows than fine
*/

  int age[3][4] = { {1,0,2,3},{5,6,7,8},{9,10,11,12} }   ,i,j;

//  int age[3][4] = {1,2,3,4,5,6,7,8,9,10},i,j;

  for(i=0; i<3; i++)
  {
    for(j=0; j<4; j++)
    {
      printf(" %3d",age[i][j]);
    }
    printf("\n");
  }


  return 0;
}

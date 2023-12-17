#include<stdio.h>
#include<conio.h>

int main()
{
  int marks[3][5],i,j, max,min;

  printf("Enter 15 student's Math marks \n");

  // taking input in array marks[3][5] ;
  for(i=0; i<3; i++)
  {
    for(j=0; j<5; j++)
    {
      scanf("%d",&marks[i][j]);
    }
  }

 max = marks[0][0] ; // Assume

 // comparing max with elements of each row and columns

 for(i=0; i<3; i++)
 {
   for(j=0 ; j<5; j++)
   {
     if( max < marks[i][j] )
      max = marks [i][j] ;
   }
 }

 printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<....................------------\n");
 printf("Maximum marks = %d",max); // printing end max after comparing with each element of 2d array;


 // program to calcualte min  of given numbers

 min = marks[2][0]; // Can assume any element of Array as min / max

 for(i=0; i<3; i++)
 {
   for(j=0; j<5; j++)
   {
     if(min>marks[i][j])
      min = marks[i][j];
   }
 }

 printf("\n\nMinimum marks = %d",min);

  return 0;
}

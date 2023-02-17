#include<stdio.h>
#include<conio.h>

int main()
{
//  int a[2][3][2] ;
// Declaration of 3-Dimensional Array
// The above statement mean we have [ 2 matrix of 3X2 order ]

// Initialization of 3-D Array
int a[2][2][3] = {1,2,3,4,5,6,7,8,9,10,11,12}, i, j, k;
int b[][3][2] = {2,1,3,5,3,6,9,0,8,2,12};

int student_detail[4][4][4], count = 0 ;
printf("\t\t\t\tAfter entering 16 data hit enter key** \nEnter Roll no of 16 student................ \n");

// taking data input from user
for(i=0; i<4; i++)
{
  for(j=0; j<4; j++)
  {
    for(k=0; k<4; k++)
      scanf("%d",&student_detail[i][j][k]);
  }
  count++;
  if(count == 1)
    printf("\nEnter Age of students \n\n");

  else if(count == 2)
    printf("\nEnter height of all students roll no wise \n\n");

  else if (count == 3)
    printf("\nEnter class of all student \n\n");
}

// print the given above data of student
printf("\n==============================================\nRoll No \n\n");
count = 0; // Reinitialized

for(i=0; i<4; i++)
{
  for(j=0; j<4; j++)
  {
    for(k=0; k<4 ; k++)
    {
      printf("%3d", student_detail[i][j][k] );
    }
    printf("\n");
  }
  count++;
    printf("\n");

  if(count == 1)
    printf("\n****************************\nAge of students\n");
  else if(count == 2)
    printf("\n*********************************************\nHeight of students\n");
  else if(count == 3)
    printf("\n************************************************\nStd of student\n");
}


// To access the element of a array we need Three nested for loop
printf("\n**************************************************************************************************\n");
for(i=0; i<2; i++)
{
  for(j=0; j<3; j++)
  {
    for(k=0; k<2; k++)
    {
      printf("%2d ",b[i][j][k]);
    }
    printf("\n");
  }
  printf("\n\n");
}


    return 0;
}

#include<stdio.h>
#include<conio.h>


int main()
{
   int number[5];
    int i,j;

  printf("Enter 5 numbers : ");

  for(i=0; i<5; i++)
    scanf("%d",&number[i]);

  // sorting of elements of number[]
  for(i=0; i<4; i++)
  {
    for(j=i+1; j<5; j++)
    {
      if(number[i]>number[j])
      {
        // swap the value of a[i] and a[j] ;
        number[i] = number[i] + number[j] ;
        number[j] = number[i] - number[j];
        number[i] = number[i] - number[j] ;
      }
    }
  }

  // Number in Increasing order
  for(i=0; i<5; i++)
    printf("%02d ",number[i]);

  return 0;

//  int age[5],i,j,t;
//
//  printf("Enter age of five students of your class \n");
//  // Take input from user
//  for(i=0; i<5; i++)
//    scanf("%d",&age[i]);
//
//  // program to sort elements of array in increasing order ;
//
//  for(i=0; i<4; i++)
//  {
//    for(j=i+1; j<5; j++)
//    {
//      if(age[i]>age[j])
//      {
//       t= age[i];
//
//       age[i] = age[j];
//
//       age[j] = t;
//
//       /*
//       age[i] += age[j];
//
//       age[j] = age[i] - age[j];
//
//       age[i] = age[i] - age[j];*/
//      }
//    }
//  }
//
//  printf("Age of student in increasing order ..\n");
//  for(i=0; i<=4; i++)
//  {
//    printf("%d ",age[i]);
//  }
//
//   return 0;

}
/*
//  float number[5];
//  int i,j;
//
////  printf("Enter 5 numbers : ");
//
//  for(i=0; i<5; i++)
//    scanf("%f",&number[i]);
//
//  // sorting of elements of number[]
//  for(i=0; i<4; i++)
//  {
//    for(j=i+1; j<5; j++)
//    {
//      if(number[i]>number[j])
//      {
//        // swap the value of a[i] and a[j] ;
//        number[i] = number[i] + number[j] ;
//        number[j] = number[i] - number[j];
//        number[i] = number[i] - number[j] ;
//      }
//    }
//  }
//
//  // Number in Increasing order
//  for(i=0; i<5; i++)
//    printf("%0.2f ",number[i]);
//
//  return 0;
//}
*/

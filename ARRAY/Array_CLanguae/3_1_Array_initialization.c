#include<stdio.h>
#include<conio.h>

int main()
{
//  SYNTAX OF INITIALIZATION OF ARRAY

//  int age[5] = {10,34,22,28,9}; // initialization of array

// int   age[5] = {10,34,22}; // Rest block will be automatically assigned zero // 10 34 22 0 0

// int   age[5] = {0}; // To make all element of an array as zero

 int   age[20] = {0}; // size will be automatically assigned as much number of element are there
 // if we not sure about the number of element in the array then we can intialize an array without its size;

//int   age[] ; // This throw an error array size missing

// int   age[5] = {9,23,8,17,3,9};
// execess elements if size is less than no of element and garbage value will be printed if we want to access that  element.


  for(int i = 0; i<20 ; i++)
  {
    printf("%d ",age[i]);
  }

  printf("\nEnter 5 numbers \n");

  int num[5];
  for(int i =0; i<5; i++)
  {
    scanf("%d",&num[i]);
  }

 printf("\nYour entered number is.....>>>>>>>>> \n");
  for(int i = 0; i<5; i++)
  {
    printf("%d ",num[i]);
  }

  return 0;
}

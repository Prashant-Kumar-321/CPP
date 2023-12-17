// Wap to find max and min element of an array
/*
#include<stdio.h>
#include<conio.h>

int main()
{

  int num[5], j,max; // variable declaration for max calculation
  int age[5], i,min ; // variable declaration for min calculation


  printf("Enter 5 number \n");

  // loop to take input from user and store in array num []

  for(j = 0; j<5; j++)
  {
    scanf("%d",&num[j]);
  }

  // loop to determine max of array's number

  max = num[0]; // assume

  for(j=1; j<5; j++)
  {

    if(max<num[j]);
      max = num[j];

  }
  printf("maximum Number you have entered = %d",max);


  // Program to calculate min of given number

//  int age[5], i,min ;

  printf("Enter 10 numbers \n");

  for(i=0; i<5; i++)
  {
    scanf("%d",&age[i]);
  }

  min = age[0]; // assume this is true ;

  for(i=0; i<10; i++)
  {
    if(min>age[i])
      min = age[i];

  }

  printf("Minimum number is  = %d",min);

  return 0;
}
*/

#include<stdio.h>
#include<conio.h>

int main()
{

  int Salary[5], i;

  printf("Enter salary of (5 people) in K : ");

  for(i=0; i<5; i++)
    scanf("%d",&Salary[i]);

  int max = Salary[0];

  for(i=1; i<5 ; i++)
  {
    if(max<Salary[i])
      max = Salary[i];
  }

  printf("maximum salary is %d",max);

  getch();
  return 0;
}



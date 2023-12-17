#include<stdio.h>
#include<conio.h>

int main()
{
  float Num[5],sum = 0;
  int i;
  printf("Enter five number \n");

  for(i=0; i<=4; i++)
    scanf("%f",&Num[i]);

  for(i=0; i<5; i++)
    sum += Num[i];

  printf("Sum of all elements in the given array = %0.3f",sum);

  return 0;
}

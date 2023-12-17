// Wap to calculate sum of elements of an array;

/*#include<stdio.h>

int main()
{
  int n[5] = {1,4,5,6,9}, i, sum = 0;

  for(i=0; i<5; i++)
    sum += n[i];

  printf("sum = %d",sum);
  return 0;
}
*/
#include<stdio.h>
#include<conio.h>

int main()
{
  int num[5], sum = 0;

  printf("Enter 5 numbers \n");

  for(int i=0; i<5; i++) // Take input from user
    scanf("%d",&num[i]);

  for(int i=0; i<5; i++) // Add all elements of array
    sum += num[i];

  printf("sum of all elements = %03d",sum );

  return 0;
}

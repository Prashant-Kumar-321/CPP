#include<iostream>
using namespace std;

// function prototype 
int leftdiagSum(float(*)[4], int ); 
int rightdiagSum(float(*)[4], int ); 

// Driver code 
int main(void)
{
  float mtrx[4][4] = 
  {
    {9,2,-2,13}, 
    {3,4, 7, -4}, 
    {29,-20,-20,35},
    {9 ,6 ,3 ,-2}

  }; 
 

  cout<< "Sum of Left diagonal elements : "<< leftdiagSum(mtrx,4)<< endl; 
  cout<< "Sum of Right diagonal elemetns : "<< rightdiagSum(mtrx,4)<< endl; 

  return 0; 
}

// function definition 
int leftdiagSum(float(*arr)[4], int n) 
{
  int i,j, sum = 0; 
  i = 0, j = n-1; 
  for(i,j; i!=n; i++, j--)
  {
    sum += arr[i][j];    
  }

  return sum; 
}

int rightdiagSum(float(*arr)[4], int n) 
{
  int i, sum = 0;  

  for(i=0; i<n; i++)
    sum += arr[i][i]; 
  
  return sum ; 
}
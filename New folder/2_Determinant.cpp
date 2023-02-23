#include<iostream>
using namespace std; 

int const Dim = 3; 

int detm(int a[Dim][Dim], int n)
{
  int sum = 0, i = -1; 

  if(n==1) // base condition 
    return a[0][0]; 

  for(int col=0; col<n; col++)
  {
    i *= -1; 
    int b[Dim][Dim]; 
      int p ,q ; 
      for(int i=1,p=0; i<n; i++,p++)
      {
        for(int j=0,q=0; j<n; j++)
        {
          if(j!=col)
          {
            b[p][q] = a[i][j]; 
            q++; 
          }
        }
      }

    sum += (i * a[0][col] * detm(b,n-1)); 
 
  }

  return sum; 
}


//driver code 
int main()
{
  int arr[Dim][Dim] = {1,2,3,-3,5,6,7,8,9}; 
  int n = Dim; 

  int determinant = detm(arr,n); 
  
  cout<< "Determinant = "<< determinant<< endl; 

  return 0; 
}
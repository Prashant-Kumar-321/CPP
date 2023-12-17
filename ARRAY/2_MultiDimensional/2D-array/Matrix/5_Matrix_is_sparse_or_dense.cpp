#include<iostream>
using namespace std; 

bool is_Sparse(int n,float (*arr)[2])
{
  int i,zero=0; 
  for(i=0; i<n; i++) // counting zeroes in matrix; 
  {
    for(int j=0; j<n; j++)
      if(arr[i][j] == 0)
          zero++; 
  }
  
  if(zero>n*n/2)
     return true;
  else 
    return false ; 

}

int main()
{ 
  float matrx[2][2] = 
  {
    {1,2},
    {0,5}
  }; 

  if(is_Sparse(2, matrx))
    cout<< "It is Sparse "<< endl; 
  else
    cout<< "It is dense "<< endl; 

  return 0;   
}
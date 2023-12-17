#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
  int choice ;
  // float(*const f)[3] = (float(*)[3])calloc(6, sizeof(float)); 

  cout<< "Choose Following option "<< endl;
  cout<< "1. Matrix Additon "<< endl;
  cout<< "2. Matrix Substraction"<< endl;
  cin>> choice;

  int m,n;
  int i,j;

  cout<< "Enter order of matrix :"<< endl;
  cin>>m>>n;

  //int (*Mtrx1)[n];  = (int (*)[n])calloc(m*n, sizeof(int)); // Allocating memory Dynamically to store Elements of mtrx1;
  // int(*Mtrx2)[n] = (int (*)[n])calloc(m*n, sizeof(int)); // Allocting memory Dynamically to store Elements of mtrx2
  // int(*ResultantMtrx)[n] = (int (*)[n])calloc(m*n, sizeof(int)); // Allocting memory Dynamically to store Elements of mtrx2

    int (*Mtrx1)[n];  
    int (*Mtrx2)[n] ;  
    int (*ResultantMtrx)[n]; 
    
    Mtrx1 = (int(*)[])calloc(9,sizeof(int)); 


    

  // // Reading Elements in Matrix 1 ;
  // cout<< "Enter "<< (m*n)<< " elements of Matrix 1"<< endl;
  // for(i=0; i<m; i++)
  //   for(j=0; j<n; j++)
  //     cin>>Mtrx1[i][j];

  // // Reading Elements in Matrix 2;
  // cout<< "Enter "<< m*n<< " elements of Matrix 2: "<< endl;
  // for(i=0; i<m; i++)
  //   for(j=0; j<n; j++)
  //     cin>> Mtrx2[i][j];

  // // Addition of both Matrix
  // for(i=0; i<m; i++)
  //   for(j=0; j<n; j++)
  //    {
  //     if(choice == 1)
  //        ResultantMtrx[i][j] = Mtrx1[i][j] + Mtrx2[i][j]; // Matrix Addition
  //     else
  //        ResultantMtrx[i][j] = Mtrx1[i][j] - Mtrx2[i][j];  // Matrix Substraction
  //    }  

  // // displaying resultant matrix
  // cout<< "Resultant Matrix = "<< endl;
  // for(i=0; i<m; i++);
  //   for(j=0; j<n; j++)
  //     cout<< ResultantMtrx[i][j]<< "  ";

  //   cout<< endl;

  // // Freeing dynamically allocated memory
  // free(Mtrx1);
  // free(Mtrx2);
  // free(ResultantMtrx);
  return 0;
}

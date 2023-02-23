
/*  Specifying size and initializing all values of vector */
#include<iostream>
#include<vector>

using namespace std; 

int main() 
{
  const int sz = 6; 
  // creating vector of size n with all value 
  // as "13"; 
  vector<int> vect(sz,13);
  vector<int> vect1(10); // vect1 is of 10 size with all value 0   

  cout<< vect.size()<< " "<< vect.capacity()<<endl; 
  cout<< vect1.size()<< " "<< vect1.capacity()<<endl; 

  // for(int x: vect) // enhanced for loop 
  // {
  //   cout<< x<< " "; 
  // }
  // cout<< "\n"; 
  
  // for(int x: vect1)
  // {
  //   cout<<x<< " "; 
  // }
  // cout<< endl; 

  
  int i; 
  for(i=0; i<vect.size(); ++i)
  {
    cout<< vect[i]<< endl; 
  }
  cout<<endl; 
  for(i=0; i<vect1.size(); ++i)
  {
    cout<< vect1[i]<< endl; 
  }
  cout<<endl; 

  return 0; 
}
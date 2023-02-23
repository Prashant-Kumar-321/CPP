#include<iostream>
#include<vector>

using namespace std; 

int main()
{
  // Intializing vector from an array
  int arr[] = {4, 9, -12, 8, 7, 110, 24, 50};   
  int n = sizeof(arr)/ sizeof(arr[0]); 

  vector<int> vect(arr,arr+n); // vect(1st Iterator, last Iterator); [ITERATOR1, LAST)

  // displaying elements 
  for(int x : vect)
   cout<<x<< " "; 
  
  cout<< endl; 

  // Intializing vector from another vector

  // vector<int> vect1 = vect; // copy constructor will be called 
  vector<int> vect1(vect.begin(), vect.begin()+3);  // initialize vect1 with(first 3 element of vect) first elements to 3rth element of vect  
  // vect1 = vect; 

  for(int x: vect1)
  {
    cout<< x<< " "; 
  }
  cout<< endl; 

  vector<int>::iterator a = vect1.begin(); 
  a = a+4;

  return 0; 
}
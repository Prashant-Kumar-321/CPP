#include<iostream>
#include<set>
#include<iomanip>

using namespace std; 

// Driver code 
int main(void)
{
  float arr[11] = {9,-2.9,9,-3,7,6,19,5,10,-3,-2.9}; 

  set<float> unique(arr,arr+11); // Intialize my set with arr
  multiset<float> freq(arr,arr+11); // Intialize my multiset with arr 
  
  cout<< "Number -------> frequency "<< endl; 
  for(float i: unique)
  {
    cout<<setw(5)<< i<< " -------------> "<< freq.count(i)<< endl; 
  }
  cout<< endl; 

  cin.get(); 
  return 0; 
}
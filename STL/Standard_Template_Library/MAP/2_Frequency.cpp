#include <iostream>
#include<iomanip>
#include <map>
using namespace std;

int main(void)
{
  float a[] = {2,-9.8, 9,2, 3, 4.5, 1, 34, 45.5,-9.8, 9,7,5,5};
  int arrsze = sizeof(a)/sizeof(a[0]); 

  map<float ,int> arrFreq; 

  // finding frequency of elements of array 
  for(int i=0; i<arrsze; i++) // traversing through array 
  {
    if(arrFreq.count(a[i]) != 0) // element already present 
      arrFreq[a[i]]++; 

    else 
      arrFreq[a[i]] = 1; 
    
  }

  // displaying frequency table 
  cout<<"Number"<< "    "<< "Frequency "<< endl; 
  for(auto x: arrFreq) //arrFreq will return pair of map 
    cout<<setw(3)<<left<<x.first<< "-------> "<< x.second<< endl;   // (x.first --> Number) And (x.second --> Frequency of Number )
  // arrFreq.clear();+
  return 0;
}
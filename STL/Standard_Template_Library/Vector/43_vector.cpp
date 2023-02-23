#include<vector>
#include<iostream>
using namespace std; 

/*
1.vect(4,20); intializing vector with specific size and value  
2.vect(arr,arr+n); (addressOfFirstElement, address_Of_next_Location_Of_LastElement); 
3. vect = vect1; 

*/
template<class DT = int>
void display(vector<DT> vect) // template function 
{
    for(DT X: vect)
      cout<< X<< " "; 
    
    cout<< endl; 
}

/*Driver code */
int main()
{
  vector<float> vect1(5,20); 
  vector<int> vect2(10); // default value 0 of 10 size 

  int arr[] = {1,6,-20,-3,5}; 
  unsigned short n = sizeof(arr)/ sizeof(arr[0]); 

  vector<int> vect3(arr,arr+n);
  vector<int> vect4 = vect3; 


  // displayign value of all vector  
  display<float>(vect1);
  display(vect2);
  display<int>(vect3); 
  display<int>(vect4);   
  
  return 0; 
}
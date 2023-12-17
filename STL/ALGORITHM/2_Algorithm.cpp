#include<bits/stdc++.h>
using namespace std; 

int main()
{
  int arr[] = {3,9,-2,1,-10,8,6,11,32,17}; 
  int n = sizeof(arr)/ sizeof(arr[0]);

  int min = *min_element(arr,arr+n); 
  cout<<"Minimum element = "<<min<< endl; 

  int max = *max_element(arr,arr+n); 
  cout<<"Maximum element = "<<max<< endl;

  int*p = find(arr,arr+n,3); 
  if(p != arr+n)
    cout<<"Element found"<<endl; 
  else 
    cout<<"Element not found"<<endl; 

  int freq = count(arr,arr+n,3); 
  cout<<"Count = "<< freq<<endl; 

  return 0; 
}
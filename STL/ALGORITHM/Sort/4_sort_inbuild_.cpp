#include<iostream>
#include<algorithm>
#include<utility>
using namespace std; 

bool cmp(pair<int,int> a, pair<int, int> b){
   if(a.first == b.first){
    return a.second>b.second; // Decending order According to second value of pair 
   } 

   return a < b; // pairs in Ascending order 
}

bool comp(int a, int b){
  return a>b; // sort in decending order (Decreasing order)
}

// Driver function 
int main()
{
  int arr[5] = {4,0,2,7,10}; 
  sort(arr, arr+5, comp); 
  for(int i=0; i<5; i++)
    cout<<arr[i]<<" "; 
  
  cout<<" \n\n"; 
  vector<pair<int,int>> a = {{4,3}, {5,5}, {5,3}, {25,6}, {7,9}, {8,5}}; 

  sort(a.begin(), a.end(),cmp); 
  // displaying vector element 
  for(int i=0; i<a.size(); i++)
    cout<<a[i].first<< " "<< a[i].second<<endl; 

  cout<<endl; 

  return 0; 
}
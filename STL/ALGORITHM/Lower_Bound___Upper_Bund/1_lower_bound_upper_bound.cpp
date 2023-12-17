#include<bits/stdc++.h>
using namespace std; 

int main()
{
  int a[]={5,4,5,25,7,8};
  vector<int> v(a,a+6);  

  // sort(a, a+6); 
  sort(v.begin(), v.end()); 

  for(int i=0; i<6; i++){
    cout<<v[i]<< " "; 
  }
  cout<<endl; 
  int ele = 3; 
  // int*p = upper_bound(a+2, a+5, ele);
  // int*p = lower_bound(a+3,a+6,1); 

  vector<int>::iterator it; 
  it = lower_bound(v.begin(),v.end(), ele); 
  it = upper_bound(v.begin(),v.end(), ele); // just greater element in vector of ele 


  if(it == v.end()){
    cout<<"Lower bound not found"<<endl; 
     exit(0); 
  }
  cout<< *it<<endl;  

  return 0; 
}
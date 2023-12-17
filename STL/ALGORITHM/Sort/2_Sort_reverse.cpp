#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std; 

void display(vector<int> a){
  for(int x : a)
    cout<<x<< " "; 
  
  cout<<endl; 
}

// Driver Function 
int main()
{
  int n; 
  cout<<"Enter total no of stuents present in the class: "; 
  cin>>n; 
  vector<int> vect(n); 
  cout<<"Enter their marks : "<<endl; 
  for(int i=0; i<vect.size(); i++){
    cin>>vect[i]; 
  }

  reverse(vect.begin(), vect.end()); // reverse the vector ; 
  display(vect);

  sort(vect.begin()+3, vect.end());  // By default it sorts in Ascending order 
  display(vect); 

  return 0; 
}
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std; 

int main()
{
  vector<int> V{2,5,7,92,36,5,10,21};
  cout<<"Size of vector="<<V.size()<<endl;
  for(int x: V)
    cout<<x<<" "; 

  cout<<endl; 
  
  // Algorithms 
//  int min = *min_element(V.begin()+5, V.end());
//  cout<<"Minimum element = "<< min<<endl;

//  int max = *max_element(V.begin()+2, V.end()-3);
//  cout<<"Maximum element = "<< max<<endl; 

//  int sum = accumulate(V.begin()+2, V.end(),7); 
//  cout<<"Sum of Vector elements = "<< sum <<endl;

//   int freq = count(V.begin()+3, V.end(), 10);
//   cout<<"count = "<<freq<<endl; 

  // vector<int>::iterator it = find(V.begin(), V.end()-3, 3); 
  // if(it != V.end()-3)
  //   cout<<"Element found "<<*it<<endl; 
  // else   
  //   cout<<"Element not found"<<endl; 


  //+++++++++++++++++++++++++++++++++++++++++++
  // reverse element
  // reverse(V.begin()+3, V.end()); 
  // cout<<"Reverse vector"<<endl; 
  // for(int x: V)
  //   cout<<x<<" ";

  string s = "DYNAMIC ARRAY"; 
  reverse(s.begin()+8, s.end()); 
  cout<<s<<endl; 

  return 0; 
}
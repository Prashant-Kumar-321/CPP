#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

// Decide whether swapping to be done or not 
// comparator function with this we can define custom condition 
// for sorting in more efficient way 
bool should_i_swap (pair<int,int> a, pair<int, int> b){ // comparator function 
  if(a.first == b.first){
    // if(a.second<b.second) return true; 

    // return false; 

    return (a.second<b.second); 

  }
  // else{   // a.frist != b.frist 
  //   // if(a>b) return true; 

  //   // return false; 
     
  // }

  return (a > b) ; // Ascending order 

}

// Driver function 
int main()
{ 
  vector<pair<int, int>> num = {{9, 2,}, {6, 1}, {0, -3}, {3,9}, {2,8}, {3,7}}; 
  int sz = num.size(); 

  // sorting algorithm 
  int i,j; 
  for(i=0; i<sz-1; i++)
  {
    for(j=i+1; j<sz; j++){
      if(should_i_swap(num[i],num[j])){
        swap(num[i], num[j]); 
      }
    }
  }

  // displaying element; 
  for(i=0; i<sz; i++){
    cout<< num[i].first<< " "<< num[i].second <<endl; 
  }
  cout<<endl; 


  return 0; 
}
#include<bits/stdc++.h>
#include<iostream>
#include<deque>
using namespace std; 

// function to print deque 
void display_dque(const deque<int> &a)
{
 for(int x: a)
 {
  cout<< x <<" "; 
 }

 cout<<endl;
}

// Driver code 
int main()
{
  deque<int> d = {3,8,2,-4,-8,0,1,7}; //d ==> is container object
  display_dque(d);
  d.clear(); // Remove all element fron the deque; 

  d.pop_front(); // font element deleted
  d.pop_back(); //end element deleted

  auto it = d.begin()+2; 
  // cout<<*it<<endl; 
  d.erase(it, d.end()); // Erase element in range [it, d.begin()+5 )
  display_dque(d); 

  cout<<d.size()<<endl;  

vector<int>vec; 
// vec.erase(); 
vec.pop_back(); 


  return 0; 
}
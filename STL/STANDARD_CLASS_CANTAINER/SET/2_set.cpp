#include<iostream>
#include<set>
using namespace std; 

int main()
{
  // set<int,greater<int>> s = {9,8,3,};  // Max-heap
  set<int,greater<int>> s {8,0,3,-1};  // Max-heap

  s.insert(5); 
  s.insert(10); 

  set<int, greater<int>>::iterator x = s.begin(); 
  for(x; x!=s.end(); x++)
    cout<< *x<< " "; 
  cout<<endl;


  set<string> fruit{"Apple","Banana", "Orange", "PineApple", "Guava"}; 
 
  cout<< "Fruits Name in Ascending order: "<< endl; 
  for(string x : fruit)
    cout<< x<< endl;

  return 0; 
}
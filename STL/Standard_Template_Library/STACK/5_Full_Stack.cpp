#include<iostream>
#include<list>
#include<vector>
#include<stack>
using namespace std; 

void print_Stck(stack<int,vector<int>> a)
{
  while(!a.empty())
  {
    cout<< a.top()<<endl; 
    
    a.pop(); 
  }

  cout<<endl; 
}

int sum_Stck(stack<int, vector<int>> a)
{
  int sum = 0; 
  while(!a.empty())
  {
    sum += a.top(); 

    a.pop(); 
  }

  return sum; 
}

// Driver code 
int main()
{
  stack<int, vector<int>> stck; //FILO--> FIRST IN LAST OUT

  stck.push(14); 
  stck.push(89); 
  stck.push(49); 
  stck.push(20); 

  stck.emplace(82); 
  int &r = stck.emplace(12); // return reference of element inserted in stack; 
  r = 100; 
  cout<< stck.size()<<endl<<endl; 

  print_Stck(stck); // print stack element 
  cout<< sum_Stck(stck);   // calculate element of stck; 

  return 0; 
}
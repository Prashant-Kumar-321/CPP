#include<iostream>
#include<stack>

using namespace std; 

void display_stack (stack<int> );

// Driver code 
int main()
{
  stack<int> s; 

  s.push(2); 
  s.push(4); 
  s.push(6); 
  s.push(8); 

  stack<int> s1; 
  s1.push(3); 
  s1.push(6); 
  s1.push(9); 
  s1.push(12); 

  s1.swap(s); 

  display_stack(s); 
  display_stack(s1); 


  return 0; 
}
// function definition 
 void display_stack (stack<int> s)
 {
  while(!s.empty())
  {
    cout<< s.top()<<endl; 
    s.pop(); 
  }

  cout<<endl;  
 }
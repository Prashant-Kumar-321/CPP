#include<iostream>
#include<stack>
using namespace std; 

// driver code 
int main(void)
{
  // declaration of stack of int and deque sequence 
  stack<int> s; 

  // pushing element in stack 
  s.push(10); 
  s.push(20); 
 (&s)->push(30); // accessing with pointer (&s)--> pointer of container object
  s.push(40); 

  if(s.empty())
    cout<<"Stack has no element "<< endl; 
  else 
    cout<< "Stack has "<<s.size()<<" element "<<endl; 
  
  // displying element of stack; 
  while(!s.empty())  //Entery control loop 
  {
    cout<< s.top()<<endl; 

    s.pop(); 
  }

  // s.emplace(); 



  

  return 0; 
}
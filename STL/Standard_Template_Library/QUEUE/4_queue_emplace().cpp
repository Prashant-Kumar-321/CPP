#include<iostream>
#include<queue>

using namespace std; 

// Driver function 
int main(void)
{
  queue<int> myqueue;

  
  myqueue.emplace(67); // used to insert element at the end of the queue   
  myqueue.emplace(68); 
  myqueue.emplace(69); 

  myqueue.push(70); 

  cout<< "Last element of queue = "<< myqueue.back()<< endl; 

  while(!myqueue.empty())
  {
    cout<< myqueue.front()<< endl; 

    myqueue.pop(); 
  }

  return 0; 
}
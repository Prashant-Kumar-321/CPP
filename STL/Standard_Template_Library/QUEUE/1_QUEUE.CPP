#include<iostream>
#include<queue>

using namespace std; 

// Driver code 
int main()
{
  queue<int> q; // Behavoiou==> first-in-first-out (FIFO)

  q.push(8); 
  q.push(16); 
  q.push(2); 
  q.push(15); 
  q.push(4); 

  cout<< "Element in queue = "<< q.size()<< endl; 

  // PRINTING ALL ELEMENT OF QUEUE 
  while(!q.empty())
  {
    cout<<q.front()<<endl; 

    q.pop(); 
  }

  cout<< "Element left in queue = "<< q.size()<< endl; 

  return 0; 
}
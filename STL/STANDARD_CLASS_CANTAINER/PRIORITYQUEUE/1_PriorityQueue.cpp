#include<iostream>
#include<queue> 
#include<vector>
using namespace std; 

int main()
{
  // priority_queue<int> pq; // Element sorted in Descending order 
  priority_queue<int, vector<int> , greater<int>> pq; // Element sorted in Ascending order 

  pq.push(9); 
  pq.push(10); 
  pq.push(1); 
  pq.push(4); 
  pq.emplace(45);

  cout<< "Size of priority_queue = "<< pq.size()<< endl; 

  while(!pq.empty())
  {
    cout<<pq.top()<<endl; 

    pq.pop(); 
  }

   

  return 0; 
}
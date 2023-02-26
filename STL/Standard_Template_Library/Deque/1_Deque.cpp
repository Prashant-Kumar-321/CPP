#include<iostream>
#include<deque>
using namespace std; 

void print(const deque<int> &a_)
{
  int i; 
  for(i=0; i<a_.size(); i++)
  {
    cout<<a_[i]<< " "; 
  }

  cout<<endl; 
}

// driver code 
int main()
{
  deque<int> dq = {9,6,89};
   
  dq.push_back(20); 
  dq.push_front(1); 

  dq.emplace_back(60);
  dq.emplace_front(40);

  cout<< "NUmber of element stored = "<< dq.size()<<endl; 
  cout<< "First element = "<<dq.front()<<endl; 
  cout<< "Last element = "<<dq.back()<<endl; 
  cout<< dq.at(3)<<endl; 

  // print deque element Iterting through container using iterator 
  // deque<int>::iterator it = dq.begin(); 
  // for(it; it != dq.end(); it++)
  //   cout<< *it<< " ";
  print(dq); 
  dq.pop_front(); // Remove first element ; 
  dq.pop_back();  // Remove last element ; 

  print(dq); 
  deque<int> dq1; 
  dq1 = dq; // one dq to another

  // print element of deque
  while(!dq.empty())
  {
    cout<< dq.front()<<" ";  

    dq.pop_front(); 
  }

  cout<<"\nsize of deque = "<< dq.size()<<endl;
  print(dq1);  

  return 0; 
}
#include<iostream>
#include<deque>
using namespace std; 

template<class T = int>
void print(deque<T> a) ; // template function 
 
int main()
{
  deque<short> dq(2,4); // insert 3 times 6,6,6
  
  dq.insert(dq.end(),{9,3,-4});
  dq.insert(dq.begin()+2, 80);  
  dq.at(2) = 30; 
  

  dq.clear(); // Remove all element from deque 
  print(dq);   
  *(dq.rbegin()) = 8; 
  return 0; 
}

// function defintion 
template<class T = int>
void print(deque<T> a) // template function 
{
  while(!a.empty())
  {
    cout<<a.front()<<" ";

    a.pop_front(); 
  }

  cout<<endl; 
}


/* 
Time-Complexcity:------
Accessing Elements- O(1)
Insertion or removal of elements- O(N)
Insertion or removal of elements at start or end- O(1)
*/
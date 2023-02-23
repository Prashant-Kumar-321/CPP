#include<iostream>
#include<forward_list>
#include<list>
using namespace std; 

// Driver function 
int main(void)
{
  forward_list<int> li = {1,2,3}; 
  list<int> lst = { 9,8,5,7}; 

  // li.assign({2,5,9}); 

  int elmnt = 10; 
  forward_list<int>::iterator itr = li.begin(); 

  li.push_front(7); // insert element at starting
  li.pop_front();   // Remove first element 
  
  
  // insert_after() return itrator of last inseted element
 

  itr = li.insert_after(itr, elmnt);
  itr = li.insert_after(itr, {20,30,40});
  li.insert_after(itr,lst.begin(), lst.end()); 
    
  for(auto x: li) // enhanced for loop 
    cout<< x<< " "; 
  cout<<endl; 
  

  return 0; 
}
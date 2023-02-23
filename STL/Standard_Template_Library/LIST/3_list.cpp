#include<iostream>
#include<list>

using namespace std; 
void display(list<int> li)
{
 for(auto x: li)
 {
  cout<<x << " "; 
 }

 cout<< endl; 
}

// std::assign(); 
// Assigns new contents to the list container, replacing its current contents, and modifying its size accordingly.

// Driver code
int main(void)
{
  list<int> lst1{2,8,-3,7,9};
  list<int> lst2(5,20); 

  // assignment to lst1 
  // old data get overide 
  display(lst1); 
  lst1.assign({3,9,1,-3,-5}); // Assignment to my lst1
  display(lst1); 

  lst1 = lst2; 
  display(lst1); 

  lst1.assign(5,10);
  display(lst1); 

  // Intializing and assignment list from array; 
  
  int myarr[5] = {9,10,28,40,62}; 
  // list<int> lst3(myarr, myarr+5); 
  list<int> lst3; 
  lst3.assign(myarr, myarr+5); 
  display(lst3); 


  return 0; 
}
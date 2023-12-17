#include<iostream>
#include<set>
using namespace std; 

int main()
{
  set<int> s; //---->Acending order 
  // By default Elements are stored in sorted order (MIN-HEAP) 
  // Inserting values in set 
  s.insert(3); 
  s.insert(9); 
  s.insert(1); 
  s.insert(0); 
  s.insert(3); 
  s.insert(8);

  int y = s.erase(6); // Remove Element equal to 3 
  cout<<"The number ofelement has been erased "<< y<< endl;
  
  // s.clear();  // Reoves all element 

  auto ele = s.find(10);   // find element and return its iterator ; 
  if(ele == s.end()) // element not found 
    cout<< "Element is not present "<< endl; 
  else  // element 
    cout<< "Elements "<<*ele<< " is found "<< endl; 
  
  // if(ele != s.end()) // element is found in set 
  // else // element is not found in set 


  cout<< "The size of set = "<< s.size()<< endl; 

  set<int>::iterator x = s.begin(); 
  for(x; x!=s.end(); x++)
    cout<< *x<< " "; 
  cout<<endl; 


  return 0; 
}
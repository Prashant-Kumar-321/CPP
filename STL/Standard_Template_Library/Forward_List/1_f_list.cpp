#include<iostream>
#include<forward_list>

using namespace std; 

// Driver code 
int main(void)
{
  forward_list<int>li; // declaration of forward_list container
  forward_list<int>li1{8,9,10,3};
  li1.clear(); // Erase all the elements of list; 

  li1.assign(5,3); // 5 times assign 3 
  li1.assign({10,20,22,9,64,5,7}); 

  forward_list<int>::iterator itr; 
  for(itr = li1.begin(); itr != li1.end(); advance(itr,1))
    cout<<*itr<< " "; 

  cout<< endl;

  forward_list<float> li2(10,0);
  for(float age: li2)
    cout<< age<< " "; 
  cout<<endl;  

  return 0; 
}
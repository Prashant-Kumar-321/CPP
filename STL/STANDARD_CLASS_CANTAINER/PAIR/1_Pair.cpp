#include<iostream>
#include<utility>
using namespace std; 

// Driver code 
int main(void)
{
  // declare a pair of (int-char)
  pair<int , char> p1;
  pair<int ,const char*>p2,p3;  

  // first part of pair 
  p1.first = 100; 
  // second part of pair 
  p1.second = 'P'; 

  cout<< "First part = "<< p1.first<< endl; 
  cout<< "Second Part = "<< p1.second<< endl; 


  // Second parir
  p2.first = 20; 
  // p2.second = "Prashant";
  p2.second = "Raza";  
  cout<< "Key = "<< p2.first<< " ,Value = "<<p2.second<< endl; 

  p3.first = 20; 
  p3.second = "Prashant";

  // p2 = p3;
  // p2.swap(p3);   
  cout<< "Key = "<< p3.first<< " ,Value = "<<p2.second<< endl; 

  // comparing 
  if(p2>=p3)
    cout<< "p2 >= p3"<< endl; 

  else 
    cout<< "p3 > p2"<< endl; 

  return 0; 
}
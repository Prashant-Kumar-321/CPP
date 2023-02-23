#include<iostream>
#include<utility>
using namespace std; 

// Driver code 
int main()
{
  // Intializing pair
  pair p1(2,'P');  
  pair p2 = p1; 
  pair<string, int> person1("Prashant", 52);

  pair<int , double>pair1; // it is intialized to zero by default 
  pair<string, char>pair2;  // it is intialized with null 

  pair1 = make_pair(13, 4.76); 
  //print zero (0); 
  cout<< pair1.first<< endl; 
  cout<< pair1.second<< endl<<endl; 

  pair2 = make_pair("CaptainCoder",'P'); 
  pair2 = {"captain coder",'p'}; 
  // Print nothing
  cout<< pair2.first<< endl; 
  cout<< pair2.second<< endl; 

  // cout<<"First part = "<< person1.first<< endl; 
  // cout<< "Second Part = "<< person1.second<< endl; 
  
  return 0; 
}
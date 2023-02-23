#include<iostream>
#include<array>
using namespace std; 

int main()
{
 array<char,15> name = {'P','R','A','S','H','A','N','T'}; 
 array<char,15>::iterator Nme = name.begin(); 

 for(Nme; Nme != name.end(); Nme++)
    cout<< *Nme; 
  cout<< endl; 
  
  int n = 8; 
  array<int,5> age{9,67,8,10};
 
  for(int x: age)
    cout<<x<< " "; 
  cout<< endl;  


  return 0; 
}
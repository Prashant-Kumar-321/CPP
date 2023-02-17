#include<iostream>
#include<array>
using namespace std; 

int main()
{
 array<char,15> name = {'P','R','A','S','H','A','N','T'}; 
 array<char,15>::iterator Nme = name.begin(); 

 for(Nme; Nme != name.end(); Nme++)
    cout<< *Nme;  


  return 0; 
}
#include<iostream>
#include<map>

using namespace std; 

// Driver Function
int main(void)
{
  map<int, char> mp1 = {{1,'C'}, {2,'D'}, {3,'E'},{9, 'x'}}; 

  pair<int, char> p1{0,'A'};

  map<int, char> mp2 {p1, {9,'Z'} }; // { pair1, pair2, pair3, pair4,pair5 };

  mp2.insert({4,'F'}); 
  mp1.insert(pair<int ,char> (5, 'G'));
  mp1.insert({{11,'p'}, {12,'q'},  {13,'r'}}); 

  mp2.insert(mp1.begin(), mp1.end());  // (iterator 1, itertor 2) // inserting pairs of [mp1 ---> mp2] 

  // Finding existance of a key with the help of count 
  cout<< mp2.count(0)<< endl;  // find and return number of value mapped with specified key; 
  if(mp1.count(9) != 0)
    cout<< "key is present "<< endl; 
  else  
    cout<< "key is not present "<< endl; 
  
  // Finding element with the help of find(); 
  if(mp1.find(9) != mp1.end()) 
    cout<< "key is present "<< endl; 
  else
    cout<< "key is not present "<< endl; 
  
  cout<< endl; 

  cout<< "No. Char"<< endl; 
  for(pair<int,char> x: mp2) // return pair 
  //  cout<<x.first<< "   "<< x.second<< endl; 
  cout<< x.first<< "     "<< mp2[x.first]<< endl; 


  return 0; 
}
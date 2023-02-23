#include<iostream>
#include<array>
#include<utility>

using namespace std; 

// Driver Function 
int main(void)
{
  array <pair<int, char>, 5> pairArr;
  // pair<int,char> parr[5]; 

  int TemInt; 
  char TemChar;

  cout<< "Enter 5 Records : "<< endl; 
  cout<<"Number and associative char: "<< endl ; 

  for(int i=0; i<5; i++)
  {
    cin>>TemInt>>TemChar; 

    pairArr[i].first = TemInt; 
    pairArr[i].second = TemChar; 
  }


  // displaying all pairs 
  cout<<"Number                                 "<< " Character "<< endl; 
  for(pair<int,char> p: pairArr)
    cout<< p.first << "   "<< p.second<< endl; 

  return 0; 
}
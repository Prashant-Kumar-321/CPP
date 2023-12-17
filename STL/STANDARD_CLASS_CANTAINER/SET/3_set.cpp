#include<iostream>
#include<set>

using namespace std; 

int main()
{
  set<int>s1 = {1,2,3,4,5,5,6,7}; 
  set<int>s2 {10,20,30,40,50,60,70};

  s1.swap(s2); 
  for(auto x: s1)
    cout<< x<< " "; 
  cout<< endl; 

  for(auto x: s2)
    cout<< x<< " "; 
  cout<< endl; 

  /********************************************************************************************************/
  int no;
  set<int,greater<int>> Age; 

  cout<< "Enter Number of Records to be stored: "; 
  cin>>no; 

  int num; 
  while(no--) // iterating loop no. number of times 
  {
    cin>>num;
    if(Age.find(num) != Age.end()) //i.e current num is already inputed 
      continue;
    
    Age.insert(num);

    system("cls"); 
    cout<< "Enter Number of Records to be stored: "<<endl;  
  }

  // erasing all negative numbers [-60,-1]
  for(int i = -60; i<0; i++)
    Age.erase(i); 
  
  cout<< "Size of Record = "<< Age.size()<< endl; 


  cout<< "Age in Decending order "<< endl; 
  for(auto x: Age)
    cout<< x<< " " ; 
  
  return 0; 
}
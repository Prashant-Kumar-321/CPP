#include<bits/stdc++.h>
#include<map>
using namespace std;
//Function prototype to take input 
void Assign(multimap<int,int>&a);

void printMup (const multimap<int,int> &a)
{
 multimap<int,int> ::const_iterator it = a.begin(); 

 for(pair<int,int> p: a)
 {
  cout<<p.first<< "   "<< p.second<<endl;
 }

 cout<<endl; 
}

//Driver code 
int main()
{
  multimap<int,int> mup{{0,0}}; // intialization of multimap 

  mup.insert({1,2}); 
  mup.insert({{2,3},{3,4},{4,5},{1,0}}); 

  cout<<"size of Multimap = "<<mup.size()<<endl<<endl; 
  printMup(mup); 

  if(mup.find(5) != mup.end())
    cout<< "key is present "<< endl; 
  else 
    cout<< "key is not present "<<endl; 
  
  cout<<"No of values associated = "<< mup.count(1)<<endl; 

  mup.erase(1); 
  printMup(mup); 
  
  mup.clear(); // reomove every element from multimap 
  printMup(mup); 
  cout<<"endl"<<endl<<endl;
  
  // Taking input 
  Assign(mup); 
  printMup(mup); 

  return 0; 
}

void Assign(multimap<int,int>&a)
{
  pair<int,int> p; 
  cout<<"Enter 4 pair of numbers"<<endl; 

  for(int i=0; i<4; i++){
     cin>>p.first>>p.second; 
     a.insert(p); 
  }
}


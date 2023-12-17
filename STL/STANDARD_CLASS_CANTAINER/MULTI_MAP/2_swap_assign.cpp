#include<bits/stdc++.h>
#include<iostream>
#include<map>

using namespace std; 
void printf(multimap<int, string>); // print forward 
void printr(multimap<int, string>); // print reverse 


int main()
{
  multimap<int,string> multimp1 = {{1,"ABC"}, {2,"CDE"}, {3,"FGH"}, {4,"IJK"}}; 
  multimap<int,string> multimp2 = {{10, "abc"}, {11, "def"}, {12, "fgh"}, {13, "ijk"}}; 

  // displaying element of multimap
  printf(multimp1); 
  printf(multimp2); 

  // multimp1 = multimp2;
  multimp1.swap(multimp2); 
  cout<<"\nAfter swapping "<< endl; 
  printf(multimp2); 
  printf(multimp1);

  cout<<"printing in reverse direction "<<endl; 
  printr(multimp2);  


  return 0; 
}

void printf(multimap<int, string> m)
{
  for(auto p: m)  // enhance for loop 
    cout<<p.first <<p.second<<" "; 
  
  cout<<endl; 
}

void printr(multimap<int, string> m)
{
  multimap<int, string>::reverse_iterator x = m.rbegin(); 
  for(x=m.rbegin(); x!=m.rend(); x++)
    cout<<x->first<< " "<< x->second<<endl; 
  
  cout<<endl; 

}
//(Note: Reverse iterators iterate backwards i.e when they are increased they move towards the beginning of the container)
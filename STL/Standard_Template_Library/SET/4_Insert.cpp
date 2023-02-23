#include<iostream>
#include<set>
using namespace std; 

// Driver code 
int main()
{
  set<int> s1{1,8,-7,3,34,7,2,1}, s2(9,0) /* ---> only one zero (0) */; 

  // insert function to insert element in container
  pair<set<int>::iterator, bool> p = s1.insert(8); 

 cout<<*p.first<< endl; 

  if(p.second)
    cout<< "elements has been inserted successfully" << endl;
  else 
    cout<< "element hasn't been inserted successfully "<< endl; 
  
  // Inserting array element in set 
  int arr[] = {5,7,9,12,10}; 
  
  s2.insert(s1.find(3),s1.end()); 
  s2.insert(arr, arr+5);  
  s2.insert({40,23});  // inseting element from list { }

  cout<< "S2 container element "<< endl; 
  for(int x: s2)
    cout<< x<< " "; 
  cout<< endl;  

  return 0; 
}
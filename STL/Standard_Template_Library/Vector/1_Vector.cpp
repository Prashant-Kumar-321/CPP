#include<iostream>
#include<vector>
using namespace std;

void szcpty (vector<int> v)
{
  cout<< "size     = "<< v.size()<< endl; 
  cout<< "Capacity = "<< v.capacity()<< endl; 
  cout<< endl; 
}

// Driver code 
int main(void)
{
  vector<int> v; // empty vector 
  vector<float> v1 = {8,9}; // intialization of vector in array style 
  v1.assign({8,9}); 

  cout<< "size     = "<< v.size()<< endl; 
  cout<< "Capacity = "<< v.capacity()<< endl;

  // Storing values in vector using push_back()
  v.push_back(10); 
  v.push_back(4); 
  v.push_back(5); 

  // Inseting element in vector v using insert function 
  // vect.insert(iterator,value); 
  v.insert(v.begin()+2, 38); 
  v.insert(v.begin(),4);
  v.insert(v.end()-2,80) ; 
   

  cout<< "size     = "<< v.size()<< endl; 
  cout<< "Capacity = "<< v.capacity()<< endl;

  vector<int>::iterator vt; // vector iterator 
  vt = v.begin();  
  
  // displaying element of vector
  for( ; vt != v.end(); vt++)
    cout<< *vt <<" "; 
  
  // Enhanced for loop 
  for(int ve : v)
  {
    cout<< ve<< " "; 
  }

  return 0; 
}